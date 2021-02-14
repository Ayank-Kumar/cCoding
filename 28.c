#include<stdio.h>
#include<math.h>

int main(){

int i,j,k,rows,n,ans,z,m;
printf("no. of rows:");
scanf("%d",&rows) ;

for(i=0;i<=rows;i++){
    for(k=rows+1-i;k>=1;k--){
        printf("  ");
    }
    for(j=0;j<i;j++){
        m = nCr(i, j) ;
        printf("%d ", m) ;
    }
    printf("\n");
}
return 0 ;
}

 int f(int n){
int fact=1 , z ;
    for(z=1;z<=n;z++){
        fact = z * fact ;
    }
 }

int nCr(int n, int r){
  int ans ;
   ans = ( f(n) / f(r)*f(n-r) ) ;
    return ans ;
}
