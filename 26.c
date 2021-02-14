#include<stdio.h>
#include<stdlib.h>

int main(){

int i,j,k,n;

printf("enter the number of rows:");
scanf("%d",&n);

for(i=1;i<=n;i++){
    k=(i*(i-1)/2) + 1 ;
        for(j=1;j<=i;j++)
        {
        printf("%d ",k);
        k++;
        }

    printf("\n");
}

return 3 ;
}
