#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        printf("Usage: resize n infile outfile\n");
        return 1;
    }

    int factor = atoi(argv[1]);
    // try once completed
    if (factor <= 0 || factor > 100)
    {
        printf("Usage: resize n infile outfile\n");
        return 1;
    }

    // // remember filenames
    char *infile = argv[2];
    char *outfile = argv[3];

    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

    int oldWidth = bi.biWidth;
    int oldHeight = bi.biHeight;
    int newWidth = bi.biWidth * factor;
    int newHeight = bi.biHeight * factor;

    // determine padding for scanlines
    int padding = (4 - (oldWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    int newPadding = (4 - (newWidth * sizeof(RGBTRIPLE)) % 4) % 4;

    //change headers...already read files so can change to biheight and biwidth
    bi.biHeight = newHeight;
    bi.biWidth = newWidth;
    bi.biSizeImage = ((sizeof(RGBTRIPLE) * newWidth) + newPadding) * abs(newHeight);
    bf.bfSize = bi.biSizeImage + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
    // sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER = 54

    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

    // iterate over infile's scanlines
    for (int i = 0, biHeight = abs(oldHeight); i < biHeight; i++)
    {
        for (int z = 0; z < factor; z++)
        {
            // iterate over pixels in scanline
            for (int j = 0; j < oldWidth; j++)
            {
                // temporary storage
                RGBTRIPLE triple;

                // read RGB triple from infile
                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);

                // // write RGB triple to outfile
                // fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);

                // iterate each pixel n times
                for (int l = 0; l < factor; l++)
                {
                    // write RGB triple to outfile
                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);
                }
            }
            // skips over padding if any
            fseek(inptr, padding, SEEK_CUR);

            // then add it back (to demonstrate how)
            for (int k = 0; k < newPadding; k++)
            {
                fputc(0x00, outptr);
            }

            // moves cursor back and iterates factor number of times on row
            if (z < factor - 1)
            {
                fseek(inptr, -1 * ((oldWidth * sizeof(RGBTRIPLE)) + padding), SEEK_CUR);
            }
        }
    }

    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    // success
    return 0;
}