#include<stdio.h>

int main(){

int score ;

printf("enter your marks :") ;
scanf ("%d", &score) ;

if (score >= 65)
    printf("satisfactory") ;
else if (score <= 55){
    printf("failing") ;
}else{
    printf("unsatisfactory") ;
}

return 9 ;
}
