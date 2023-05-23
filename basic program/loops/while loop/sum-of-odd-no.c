//sum of odd number using while loop//
#include <stdio.h>

int main() {
  int num;
  printf("\nEnter the odd number upto which you want their sum=");
  scanf("%d", &num);
  int a = 1;
  int sum = 0;
  while (a <= num ) {
    printf("%d \n", a);
    sum +=a;
    a=a+2;
  }
  printf("Sum is=%d",sum);
  return 0;
}