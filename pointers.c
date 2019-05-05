#include <stdio.h>
#include <stdlib.h>

int main()

{
    int x = 4;
    int *address_of_x = &x;
    int valued_stored = *address_of_x;

    *address_of_x = 99;

    printf("x lives at %p\n", &x);



}