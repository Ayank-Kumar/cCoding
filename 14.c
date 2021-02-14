#include<stdio.h>
#include<math.h>

int main(){

int a,b,c ;
float dis ;

printf("enter a,b,c :") ;
scanf("%d%d%d",&a,&b,&c) ;

dis = sqrt((b*b) - 4*a*c ) ;

printf("%f", dis) ;

return 0 ;
}
