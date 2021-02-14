#include<stdio.h>
#include<math.h>

int main(){
    float p,r,t,si,ci ;
    printf("enter principal,rate and time:") ;
    scanf("%f%f%f",&p,&r,&t) ;

    si = (p*r*t)/100 ;
    ci = p*pow((1+r/100),t) ;

    printf("the simple interest is %f", &si) ;
    printf("the compound interst is %f", &ci) ;


   return 0 ;
}
