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
void printSums(int,int);
int squared(int);
bool isLeapyear(int);






int main(void)
{

    int year = get_int("Enter a year: ");
 if (isLeapyear(year))
 {
     printf("%i is a Leap Year.\n", year);
 } else

 {
  printf("%i is not a Leap Year. \n", year);

 }





}

bool isLeapyear(year)
{
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);




}
        int squared(num)
{
        int speed = num;
        return num * speed;
}








void printSum(void)
{
    printf("1 + 2 = %i\n",1 + 2);  //definition is what is in the code
}


void printSums(int x, int y)
{
    printf("%i + %i = %i\n", x ,y , x + y);
}