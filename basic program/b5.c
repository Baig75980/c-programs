#include<stdio.h>
int main(){
    char p;
    char a,e,i,o,u,A,E,I,O,U;
    printf("\nEnter any alphabet:");
    scanf("%c",&p);
    switch (p)
    {
    case 1 :
           if (p==A || p==a){
            printf("\nIt's a vowel");
           }
        break;
        case 2 :
           if (p==E || p==e){
            printf("\nIt's a vowel");
           }
        break;
        case 3 :
           if (p==I || p==i){
            printf("\nIt's a vowel");
           }
        break;
        case 4 :
           if (p==O || p==o){
            printf("\nIt's a vowel");
           }
        break;
        case 5 :
           if (p==U || p==u){
            printf("\nIt's a vowel");
           }
        break;
    
    default:
      {
        printf("\nIt's a consonant");

    }
        break;
    }
}