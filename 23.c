#include<stdio.h>
#include<math.h>

int main(){

int i,j,k,rows,n,ans,z,m;
printf("no. of rows:");
scanf("%d",&rows) ;


int fact=1,curr_num ;
 int f(int n){
    for(z=1;z<=n;z++){
        fact = z * fact ;
    }
 }

int nCr(int n, int r){
   ans = ( f(n) / f(r)*f(n-r) ) ;
    return ans ;
}
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
