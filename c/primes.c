#include<stdio.h>
int main(){
    int num;
    printf("Enter the number upto which you want to print the primes:");
    scanf("%d",&num);
    printf("The prime number upto %d are :",num);
    for(int i=1;i<=num;i++){
        int flag=0;
        for(int j=2;j<=i/2+1;j++){
            if(i%j==0){
                flag++;
                break;
            }
        }
        if(flag==0){
            printf("\nThe number %d is a prime",i);
        }
    }
}