#include<stdio.h>

int main(){

int row,j,i,k ;

printf("how many rows do you want in pyramid :");
scanf("%d",&row) ;


for(i=1;i<=row;i++){//initialize 0 se krenge to second for loop phli baar me blank rh jayega
  for(j=0;j<=(row-i);j++){
    printf("  ");
  }
    for(k=4;k<=(2*i-1);k++){//initialize
        printf("# ") ;
    }

   printf("\n") ;
}

return 0 ;
}
