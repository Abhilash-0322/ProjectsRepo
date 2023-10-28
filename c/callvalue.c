#include<stdio.h>
void square(int n);
void _square(int *n);
int main(){
    int num;
    printf("Enter the value of num :");
    scanf("%d",&num);
    square(num);
    printf("value of num after calling the square function: %d\n",num);
    _square(&num);
    printf("Value of Num In Main After Calling the _square Function:%d\n",num);
}
void square(int n){
    n*=n;
    printf("Squared value inside square function:%d\n",n);
}
void _square(int *n){
    *n*=*n;
    printf("Squared value inside the Call By Refrence Function:%d\n",*n);
}