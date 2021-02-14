#include<stdio.h>
#include <conio.h>
int main(){

int a,b ;
char Boy[3] ; // ye limit se jyada character le rha ha
char character ;


printf("enter the two number you want to multiply : \n") ;
scanf("%d%d", &a,&b) ;
printf("the product is : %d \n" , a*b ) ;

printf("enter your favourite alphabet : \n");
scanf ("%c",&character) ;
printf("you have a good choice because %c is unique \n",character) ;

printf("who is he : \n") ;
scanf("%s",&Boy) ;
printf("he is a fantastic %s" , Boy) ; // yha pe 3 se jyada ka daala jaise godfather to woh bhi le rha ha pura
// and jaise %s ki jgh %c lga rha tha to kuchh bhi read nhi kr rha tha jbki g to read krna chahiya tha

return 0 ;
}
