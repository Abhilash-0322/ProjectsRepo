#include<stdio.h>
int main(){
    int n,sumfact=0,fact=0;
    printf("Enter the value to print the sum fof factorials upto that number :");
    scanf(" %d",&n);
    for(int i=1;i<=n;i++){
        fact=1;
        for(int j=i;j>0;j--){
            fact*=j;
        }
        sumfact+=fact;
        printf("The factorial of %d is %d\n",i,fact);
    }
    printf("The sum of 1! +2! +3! +...%d! is : %d",n,sumfact);
}