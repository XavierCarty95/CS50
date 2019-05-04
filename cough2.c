#include <stdio.h>
#include <cs50.h>


void spaces(int s);
void hashes(int n);




int main(void)

{

    int height;

    do {


     height = get_int("How tall do you want the pyramid");

    }
    while (height > 0 || height < 8 );

    for(int i = 0; i < 4; i++)
    {
        hashes(3);

    }


}



void spaces(int s)
{
    for (int i =0; i < s; i++)
    {
        printf("#\n");
    }

}

void hashes(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
}