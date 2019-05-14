#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc > 1)
    {
     //getting arguement from user
       string str = argv[1];
      // setting int all on one line
      int key = atoi(argv[1]), counter = 0 , letter, x , i;
      //looping through strings
    for(i = 0; i < strlen(str); i++)
    {
        //checking if digit is between 0-9
        if(isdigit(str[i]))
        {
            counter++;
        }
    }

    if(counter == strlen(str) && argc == 2)
    {
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for(i = 0; i < strlen(plaintext); i++)
        {

            if(isalpha(plaintext[i]))
            {
                letter = plaintext[i];


                if(letter > 65 && letter <= 90)
                {
                    letter  = plaintext[i] + (key % 26);
                    if(letter > 90)
                    {
                        letter = 64 + (letter - 90);
                        printf("%c", letter);
                    }
                    else
                    {
                        printf("%c", letter);
                    }
                }

                //lowercase
                if(letter >= 97 && letter <= 122)
                {
                    letter = plaintext[i] + (key % 26);
                    if(letter > 122) {
                        letter = 96 + (letter - 122);

                        printf("%c", letter);
                    }

                    else
                    {
                        printf("%c", letter);
                    }
                }

            }
            else
            {
                printf("%c" , plaintext[i]);
            }

        }
        printf("\n");
    }
    else
    {
        printf("Usage ./caesar key\n");

    }


    }
    else
    {
        printf("Usage ./caesar key\n");

    }

}
