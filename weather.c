#include <stdio.h>



void gosoutheast(int* lat , int* lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}



int main()
{
    int latitude = 64;
    int longitude = 32;


    gosoutheast(&latitude, &longitude);
    printf("You are at position %2i %2i\n", latitude, longitude);

    return 0;

}