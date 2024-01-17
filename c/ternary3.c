#include<stdio.h>
int main(){
    int num1,num2;
    int smaller;
    printf("Enter your numbers:");
    scanf("%d %d",&num1,&num2);
    num1>num2?printf("num %d is greater",num1):printf("num %d is greater",num2);
    smaller=num1<num2?num1:num2;
    smaller%2==0?printf("\nnum %d is smallest and even",smaller):printf("\nnum %d is smallest and odd",smaller);
}