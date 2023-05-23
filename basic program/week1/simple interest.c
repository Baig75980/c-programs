#include<stdio.h>
int main(){
int p,r,t,si;
printf("\nEnter the principle amount=");
scanf("%d",&p);
printf("\nEnter the time period=");
scanf("%d",&t);
printf("\nEnter the Interest rates=");
scanf("%d",&r);
si = (p*r*t)/100;
printf("Simple interest is=%d",si);
 return 0;
}