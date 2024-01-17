#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    (num%2==0)?printf("no %d is even",num):printf("no %d is odd",num);
}