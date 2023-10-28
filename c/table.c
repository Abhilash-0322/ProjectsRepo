#include<stdio.h>
int main(){
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    for (int i=0;i<=10;i++){
        printf("\n%d",i*n);
    }
}