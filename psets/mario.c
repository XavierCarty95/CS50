#include <stdio.h>
#include <cs50.h>

int main(){

    // declare height int
    int height;
    //get height from user
    do {
    printf("What is the height ");
    height = get_int();
    }
    //satisfy the condition
    while(height < 1 || height >4);


    for(int i = 0; i < height; i++){

        // spaces decrementing
    for(int j = height - i ; j > 1 ; j--){
            printf(" ");
        }
        for(int k = 1; k < i + 2; k++ ){
            printf("#");
        }

        printf("\n");

    }


}