#include<stdio.h>
int main(){
    int num,reverse=0,temp;
    printf("Enter your number:");
    scanf("%d",&num);
    temp=num;
    if(num%2!=0){
        while (num>0){
            reverse=(reverse*10)+(num%10);
            num/=10;
        }
        printf("%d when reversed becomes :%d",temp,reverse);
    }
    else{
        printf("NOt possible");
    }
}