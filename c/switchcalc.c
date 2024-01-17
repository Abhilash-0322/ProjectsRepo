#include<stdio.h>
int main(){
    int a,b;
    char s;
    printf("Enter the value of a and b and then enter the symbol of operation you want to perform on them :");
    scanf("%d%d",&a,&b);
    printf("Enter the operatin you want to perform on them :");
    scanf(" %c",&s);
    switch (s){
    case '+':
        printf("%d",a+b);
        break;
    case '-':
    printf("%d",a-b);
    break;
    case '*':
    printf("%d",a*b);
    break;
    case '/':
    printf("%f",a/b);
    break;
    case '%':
    printf("%d",a%b);
    break;
    default:
        break;
    }
}