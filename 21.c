#include<stdio.h>
#include<math.h>
int main(){

int i,j,k,l,y,z,rows ;

printf("enter the no. of rows:") ;
scanf("%d",&rows) ;
for(i=1;i<=rows;i++){
    for(j=rows-i+1;j>=1;j--){
        printf("  ") ;
    }
    for(k=i;k<=2*i-1;k++){
        z=(k%10) ;
        printf("%d ",z) ;
    }
    for(l=2*i-2;l>=i;l--){
        y=(l%10);
        printf("%d ",y) ;
    }
    printf("\n") ;
}

return 0 ;
}
