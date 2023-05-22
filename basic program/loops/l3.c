#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("\nEnter the number whose factorial you want =");
    scanf("%d",&n);
    for (int i =1; i <=n; i = i+1)
    {
        fact=fact*i;
    }
    printf("\nThe factorial of a given number is=%d",fact);
    return 0;
    
}