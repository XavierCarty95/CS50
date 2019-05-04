#include <stdio.h>
#include <cs50.h>

int spaces();
int hashes();
int height, space, dash;

int main(void)

{
    printf("What is the current height?");
    height = get_int();

    if (height > 0)
    {
        spaces();
        hashes();

    }


}

int spaces()
{


    for (int i = 0; i < height; i++)
    {
        printf(" ");
    }
}



int hashes()
{
    for (int i = 0; i < height; i++)
    {
        printf("#");
    }

}