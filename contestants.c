#include <stdio.h>





int main()
{
    int contestants[] = {1,2,3};
    int *choice = contestants;
    contestants[0] = 1;
    printf("I'm going to pick contestants number %i\n", contestants[0]);
}

