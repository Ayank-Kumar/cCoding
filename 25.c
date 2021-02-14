#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

int i=1,j,n,s,k=0 ;

printf(" how many rows do you want in floyd's triangle :") ;
scanf("%d",&n) ;
s=n*(n+1)/2 ;

    for(j=1;j<=s;j++)
        {
        k=i*(i+1)/2 ;
        if(j=k){
            printf("%d ",j);
             }

        else {
            printf("%d ",j) ;
            printf("\n") ;
             }
        i++ ;
       }

return 0;
}
