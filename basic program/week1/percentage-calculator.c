//calculating percentage by taking marks in diff subject//
//taking it from user and giving results//
//also used if else conditions//
#include<stdio.h>
int main(){
   
    
    int m1,m2,m3,m4,m5;
    printf("\nEnter the marks in maths=");
    scanf("%d",&m1);
    printf("\nEnter the marks in science=");
    scanf("%d",&m2);
    printf("\nEnter the marks in english=");
    scanf("%d",&m3);
    printf("\nEnter the marks in SST=");
    scanf("%d",&m4);
    printf("\nEnter the marks in Secondary language=");
    scanf("%d",&m5);

    int sum;
    sum=m1+m2+m3+m4+m5;
    float per;
    per= sum/5;
    printf("\nTotal percentage=%f",per);

    if (per>=90){
        printf("\nYou can get admission in science");
    }
    else if (per>=70){
        printf("\nYou can get admission in maths");
    }
     else {
        printf("\nYou can get admission in arts");
    }
        return 0;
    }
