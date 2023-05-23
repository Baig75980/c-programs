//factorial using while loop//
#include <stdio.h>
int main() {
  int num;
  printf("\nEnter the number whose factorial you want=");
  scanf("%d", &num);
  int a = 1;
  int fact = 1;
  while (a <= num ) {
    printf("%d \n", a);
    fact *=a;
    a=a+1;
  }
  printf("fact is=%d",fact);
  return 0;
}