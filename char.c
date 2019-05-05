#include <stdio.h>




 void fortune_cookie(char msg[])
 {
     printf("Message read: %s\n", msg);

 }

int main()
{
    char quote[] ="Cookies make you fat";
    fortune_cookie(quote);
    printf("The size of turtles us %lu btyes \n", sizeof("Turtles"));
}

