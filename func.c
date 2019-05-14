#include <stdio.h>
#include <cs50.h>


//declaration
int total(int a , int b , int c);

int main(void)
{
    printf("Hello\n");
    int result = total(5,8,2);
    printf("%i\n", result);
    printf("%i\n", total(4,4,4));

}

//definition
int total(a, b, c)
{
    return a + b + c;

}
// int getItemIndex(int item, int rMin)
// {
//     return item - rmin;
// }

// int encrypt(iItem, key)
// {
//     return iTem + key;
// }

// int modifier = imin + 1;
// int returnToRange = rMin

// int itemItemIndex = getItemIndex(item, rMin);
// printf("itemIndex should be 17 it is : %i\n", itemIndex)
// int encryptedKey = encrypt(itemIndex, key)
// int convertedIndex = encrypted % modifier

// convertedIndex + returnToRange
