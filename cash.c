#include <math.h>
#include <stdio.h>
#include <cs50.h>



int main()
{
    int dollars;
     do
     {
     float change = get_float("How much change is due : ");
     cents = round(change * 100);
     }
     while(cents < 0);
     int quarters = cents/25;
     int dimes = ((cents%25)/10)/5;
     int nickels =((cents%25)/10);

     printf("%d\n", quarters + dimes + nickels);


     }




