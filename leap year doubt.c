#include<stdio.h>

int main (){

int year ;
int numDays ;
printf("enter the year :") ;
scanf("%d",&year ) ;
if ((year % 4) == 0) {
printf("Leap year\n");
numDays = 365;
}
else {
printf("Not a leap year\n");
numDays = 365;
}

printf("the number of days are = %d",&numDays) ;

return 0 ;
}
