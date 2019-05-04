

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int i;
    int j;
    int k;


    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0 || height > 4);

    // Print lines
    for (i = 1; i <= height; i++)
    {
        // Print spaces
        for (j = 0; j < (height - i); j++)
        {
            printf(" ");
        }

        // print hashes
        for (k = 0; k < i; k++)
        {
            printf("#");
        }



        printf("\n");
    }

    return 0;
}