#include<stdio.h>
int main(){
    int n,fib1=0,fib2=1,fib3=0;
    printf("Enter the number of nodes to print fibonnaci upto that number:");
    scanf("%d",&n);
    printf("The first %d terms of Fibonnachi series are %d,%d",n,fib1,fib2);
    for(int i=1;i<=n-2;i++){
        fib3=fib1+fib2;
        printf(",%d",fib3);
        fib1=fib2;
        fib2=fib3;
    }
}