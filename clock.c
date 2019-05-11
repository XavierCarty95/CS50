#include <stdio.h>
#include <cs50.h>



int getNum();



int main()
{
    int nums;


    do {

    printf("Your time is %2i ,%2i", getNum(clocks, num));
    nums = get_int();

    }

    while (nums <= 1 || nums >= 12);





}
int getNum(int clocks ,int num){
    //represents which hand is pointing at
    clocks = clocks % 12;
    //the second is any integers
    num = num % 12;

    printf("Your clock cycle is %i,%i",clocks,num);


}
