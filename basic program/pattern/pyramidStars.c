/*copied code from video lecture explaining pattern ques
  still not working,it's not taking the value properly,
 and else condition is getting true so it's keep on printing blank space*/

#include<stdio.h>
int main(){
    int n;
    printf("\nEnter the size of matrix=");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j =1; i <= n; j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1)){
            printf("*"); break; //added break bcoz it kept on going//
            } 
            else {
                printf(" ");
            } break; //same here//
        }
        printf("\n");
    }
    
    return 0;
}