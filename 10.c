#include<stdio.h>

int main (){

int score ;

printf("enter your score :");
scanf("%d", &score) ;

char grade ;

if ((score == 9||10))
grade = 'A';
else if ((score == 7) ||
(score == 8))
grade = 'B';
else if ((score == 5) ||
(score == 6))
grade = 'C';
else
grade = 'F';

printf("the grade is %c", grade) ;

return 0 ;
}
