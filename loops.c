#include <stdio.h>
#include <cs50.h>

int main(){
  int b, i, result;
  printf("Print what is your muliplication score : ");
  scanf(" %d", &b);

  for (i = 1; i <= 10; i++) {
    result = b * i;
    printf("%d x %d = %d \n", b, i, result);
  }
}