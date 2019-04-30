#include <stdio.h>
/* print Farenheit-Celsuis table
   for fahr = 0, 20 , ..... 300 */

int main()
{
    // float fahr, celsius;
    // int lower, upper, step;


    // lower = 0;
    // upper = 300;
    // step = 20;

    // printf("Converting Celsius into Farenheit\n");
    // celsius = lower;

    // while (celsius <= upper) {
    //     fahr = (celsius * 9/5) + 32;
    //     printf("%6.0f %3.0f\n", celsius , fahr);
    //     celsius = celsius + step;
    // }

    int fahr;

    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d  %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}