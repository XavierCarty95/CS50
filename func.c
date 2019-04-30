#include <stdio.h>
#include <cs50.h>


//This is a declaration

// isLeapYear
// return
//accept
//every 4 year
//not divisible
//however is divided 400
void printSum();
void printSums(int , int );
int squared(int);
int Leapyear(int);






int main(void)
{

    int a;
    printf("What is you year ?");
    scanf("%d", &a);
    if (a % 400 == 0)
    {
    printf("Your year %i is a leap year", a);
    }
    else if (a % 100 != 0)
    {
    printf("Your year  %i is not leap year",a);
    }

    else if(a % 4 = 0)
    printf("Year year %i, is a leap year", a);

    else
    {
    printf("is not a leap year");
    }


}

int squared(num)
{

  return num * num;
}








void printSum(void)
{
    printf("1 + 2 = %i\n",1 + 2);  //definition is what is in the code
}


void printSums(int x, int y)
{
    printf("%i + %i = %i\n", x ,y , x + y);
}