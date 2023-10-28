#include<stdio.h>
int PrintFib(int n);
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    PrintFib(num);
    return 0;
}
int PrintFib(int n){
    if (n==0){
        return 0;
        }
    else if(n==1){
        return 1;
    }
    int fibNm1=PrintFib(n-1);
    int fibNm2=PrintFib(n-2);
    int fibN=fibNm1+fibNm2;
    printf("fib of %d is : %d\n",n,fibN);
    return fibN;
}