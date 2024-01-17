#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("Enter your value of the number to perform the operation:");
    scanf("%d%d",&a,&b);
    printf("Enter your operator");
    scanf("%c",&c);
    if(c=="+"){
        printf("%d",a+b);
    }
    else if(c=="-"){
        printf("%d",a-b);
    }
    else if(c=="*"){
        printf("%d",a*b);
    }
    else if(c=="/"){
        printf("%d",a/b);
    }
    else if(c=="%"){
        printf("%d",a%b);
    }
    else{
        printf("You entered the wrong operator");
    }
}