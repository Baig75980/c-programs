//checking if the alphabet is vowel or not//
//used switch statement here//
#include<stdio.h>
int main(){
   char c;
   printf("\nEnter any alphabet=");
   scanf("%c",&c);
   switch (c)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   printf("\n It's a vowel");
      break;
   
   default:
   printf("\n It's a consonant");
      break;
   }
   return 0;
}
