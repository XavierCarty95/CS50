#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage ./viginiere key word ");
        return 1;
    }

    string k = argv[1];
    int klen = strlen(k);
    for (int i = 0; i < klen; i++)
    {
        if (!isalpha(k[i]))
        {
            printf("invalid arguement print key");
            return 1;
        }
    }

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0, index = 0, len = strlen(plaintext); i < len; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (islower(plaintext[i]))
            {
                printf("%c", (plaintext[i] - 'a' + toupper(k[index]) - 'A') % 26 + 'a');

            }
            else if (isupper(plaintext[i]))
            {

                printf("%c", (plaintext[i] - 'A' + toupper(k[index]) - 'A') % 26 + 'A');
            }
            index = (index + 1) % klen;
        }
        else
        {

            printf("%c", plaintext[i]);

        }

    }



    printf("\n");

}
