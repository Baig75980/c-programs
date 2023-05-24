/*trying to print increasing number in the form of right
right angle traingle*/
//it's not able to print//
#include<stdio.h>
int main(){
    int i,j;
    int n;
    printf("\nEnter the size of matrix=");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j <=i; j++)
        { int num;
        int l =1;
        printf("\nEnter the number double size of matrix=");
        scanf("%d",&num);
            while (l<=num)
        {
            printf("%d",l);
            l=l+1;
        } 
        
        
    }
    }   
    return 0;
}