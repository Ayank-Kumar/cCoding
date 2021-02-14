#include<stdio.h>

int main (){

char alpha ;
printf("enter an alphabet :") ;
scanf("%c", &alpha) ;

if(alpha == 'A','E','I','O','U','a','e','i','o','u' ){
printf("it is a vowel");
}
else{
printf("it is a constant");
}

return 0 ;
}
