#include<stdio.h>
void function(int *sum,int *avg);
int a=1;
int b=2;
int main(){
    int sum=0;
    int avg=0;
    function(&sum,&avg);
    printf("sum is %d\nAvg is %d",sum,avg);
}
void function(int *sum,int *avg){
    *sum=a+b;
    *avg=(a+b)/2;
}