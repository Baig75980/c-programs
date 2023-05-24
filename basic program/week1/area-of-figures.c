//area of triangle🔺,rectangle,circle//
//calculating it by taking input from user//
#include<stdio.h>
int main(){
  int l,d,area;
  printf("\nEnter the lenght of rectangle=");
  scanf("%d",&l);
  printf("\nEnter the breadth of rectangle=");
  scanf("%d",&d);
 area = l * d;
 printf("\nthe area of rectangle is=%d",area);

 //area of circle//
 float r,pi,areaC;
 pi = 3.14;
 printf("\nEnter the radius of circle=");
 scanf("%f",&r);
 areaC = pi * r * r;
 printf("\nThe area of circle=%f",areaC);

 // area of traingle//
 float areat;
 int h,b;
 printf("\nenter the height of traingle=");
 scanf("%d",&h);
  printf("\nenter the base of traingle=");
 scanf("%d",&b);
 areat = h * b * 0.5 ;
 printf("\nThe area of traingle=%f",areat);
 return 0;

}
