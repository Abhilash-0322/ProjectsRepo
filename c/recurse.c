#include<stdio.h>
void recurse(int n);
int sumOfNaturals(int n);
int factorial(int n);
int sum=0;
int main(){
    int n;
    printf("Enter the numbers:");
    scanf("%d",&n);
    recurse(n);
    int sum1=sumOfNaturals(n);
    printf("%d\n",sum1);
    printf("%d",factorial(n));
}
void recurse(int n){
    if (n==0){
        return;
    }
    printf("%d\n",n);
    recurse(n-1);
}
int sumOfNaturals(int n){
    if(n==0){
        return sum;
    }
    sum+=n;
    sumOfNaturals(n-1);
}
int factorial(int n){
    // for (int i=1;i<=n;i++){
    //     fact*=i;
    // }
    // printf("%d\n",fact);
    if (n==0){
        return 1;
    }
    // printf("value of n is %d\n",n);
    int factNm1=factorial(n-1);
    int factN=factNm1*n;
    return factN;
}