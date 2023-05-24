//printing right angle traingle using any number taken from user//
#include<stdio.h>
int main(){
    int n,m;
    printf("\nEnter n="); //size of matrix//
    scanf("%d",&n);
    printf("\nEnter the numbers you want to print=");
    scanf("%d",&m);
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0;  j<=i; j++)
        {
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;

}