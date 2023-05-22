#include<stdio.h>
int main(){
    int n,m;
    printf("\nEnter any no=");
    scanf("%d",&n);
  for (int i =1; i <=n; i++)
  {
    printf("\nNow put the number whose sum you want:");
    scanf("%d",&m);
  }
  int sum;
  sum=+m;
  printf("the summation is=%d",sum);
}