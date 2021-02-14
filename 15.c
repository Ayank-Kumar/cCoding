#include<stdio.h>
#include<math.h>
int main(){

int num ;
int sum ;

for(num=1,sum=1;num<=20;num++,sum+=num){
    printf("sum of the first %d natural number is %d\n",num,sum) ;
}


return 0 ;
}
