#include<stdio.h>
int factorial(int n);
int main(){
    factorial(4);
}
int factorial(int n){
    // for (int i=1;i<=n;i++){
    //     fact*=i;
    // }
    // printf("%d\n",fact);
    // if (n==0){
    //     return 1;
    // }
    printf("value of n is %d\n",n);
    int factNm1=factorial(n-1);
    int factN=factNm1*n;
    return factN;
}