//converting °C to °F//
//taking input from user//
#include<stdio.h>
int main(){
int f,c;
printf("\nEnter the temperature in degree celcius=");
scanf("%d",&c);
float l;
l = (c * 1.8) + 32;
printf("\nTemperature in degree fahrenheit is=%0.2f",l);
printf("\nEnter the temperature in degree fahrenheit=");
scanf("%d",&f);
float d;
d = (f - 32) * 0.5;
printf("\nTemperature in degree celsius is=%0.2f",d);

return 0;



}
