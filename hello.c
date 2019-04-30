#include <cs50.h>
#include <math.h>
#include <stdio.h>



int main(void)
{

    // string name = get_string("What is your name? ");
    // string lname = get_string("What is your last name?");
    // string title = "Mr/Ms";
    // printf("Hello %s %s %s\n", title, name,lname);

    int myNum = 36;
    int myFloat = round(3.87 *100);
    float other = round(1.52);
    int total = myFloat + other;
    int cents = total % 100;
    int dollars = total /100;
    printf("adding the numbers: $%i.%i\n", dollars, cents);
    float division = 78.0/(float)15;
    printf("the division: %.1f\n", division);

}
