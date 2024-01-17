#include<stdio.h>
void decimaltobinary();
void binarytodecimal();
int main(){
    binarytodecimal();
    decimaltobinary();
}
void binarytodecimal(){
    int num,base=1;
    int digit,decimal=0;
    int flag=0;
    printf("Enter your binary number");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        digit=temp%10;
        temp/=10;
        if(digit>1){
            printf("The number you entered is invalid not a binary");
            flag=1;
        }
    }
    if(!flag){
        while (num>0){
            digit=num%10;
            decimal+=digit*base;
            num=num/10;
            base*=2;
        }
        printf("The number after getting converted to decimal is :%d",decimal);
    }
}
void decimaltobinary(){
    int num,digit,binary=0,base=1;
    printf("\nEnter you decimal number");
    scanf("%d",&num);
    while(num>0){
        digit=num%2;
        binary=binary+digit*base;
        num/=2;
        base*=10;
    }
    printf("The binary of your entered number is %d",binary);
}