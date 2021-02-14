#include<stdio.h>

int main (){

int lines ;
int i,j,k ;

printf("how many lines do you want ") ;
scanf("%d",&lines) ;

for(i=1;i<=lines;i++)
{
    for(j=1;j<=i;j++)
    {  for(k=1;k<=j;k++)
            {
            printf("%d ", k) ;
            }
   printf("\n") ;
    }
    printf("\n") ;
}



return 0 ;
}
