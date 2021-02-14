#include<stdio.h>
#include<math.h>

int f(int n) ;
int C(int n, int r);

int main(){

int i,j,k,rows,n,m;
printf("no. of rows:");
scanf("%d",&rows) ;

for(i=0;i<=rows;i++){
    for(k=rows+1-i;k>=1;k--){
        printf("  ");
    }
    for(j=0;j<i;j++){
        m = C(i, j) ;
        if(i==0 || j==0)
             {
            printf("1 ");
             }
        else {
                printf("%d ", m) ;
             }
    }
    printf("\n");
}
return 0 ;
}

 int f(int n){
   int fact=1 ;
   int z;
    for(z=1;z<=n;z++){
        fact = z * fact ;                   //user defined function na yaar kbhi int main function me mt bnaya kro,uske neeche
    }
 }                                          // hr function me jo variable loge usko usi function ke andar define krna hota ha

int C(int n, int r){
  int ans ;
   ans = ( f(n) / f(r)*f(n-r) ) ;
    return ans ;
}
