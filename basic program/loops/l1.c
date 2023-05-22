#include<stdio.h>
int main(){
    int n;
    printf("\nEnter any no=");
    scanf("%d",&n);
    int sum = 0;
    for(int i=0; i<n; i++){
       int m;
       printf("\n enter no=");
       scanf("%d",&m);
     sum+=m;
    }  
    printf("%d",sum);
    
    
    
    

    return 0;
}