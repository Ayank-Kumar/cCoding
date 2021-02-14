#include<stdio.h>
#include<stdlib.h>

int main (){

int secretnumber = 6 ;
int guess ;
int guesscount = 0 ;

//while loop me bhi alag alag condition lga skte ho
while(guess != secretnumber && guesscount < 3 ){
    printf("enter your number :") ;
    scanf("%d", &guess ) ;
    guesscount++ ;
}
if(guesscount==3){
    printf("sorry but you lost") ;
}
else{
printf("congratulations you won the game") ;
}

 return 0 ;
}
