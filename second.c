#include<stdio.h>
#include<math.h>
int main(){
    int eng,hindi,maths,science,sst ;
    float per ;

    printf("enter marks of english hindi maths science and sst :") ;
    scanf("%d%d%d%d%d",&eng,&hindi,&maths,&science,&sst) ;

    per=(eng+hindi+maths+science+sst)/5 ;

    printf("percentage = %f\n",per);

    if (per>=70){
        printf("first division") ;
    }
    if (per<=40){
        printf("fail") ;
    }
    else {
        printf("second division") ;
    }
 return 0;
}
