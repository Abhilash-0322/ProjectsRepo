#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,arm,digit;
    printf(" Enter the number upto which you want to check the armstrongs :");
    scanf(" %d",&num);
    printf(" Armstrong numbers from 1 to %d :\n",num);
    for(int i=1;i<=num;i++){
        temp=i;
        arm=0;
        int digits=0;
        while(temp>0){
            temp/=10;
            ++digits;
        }
        temp=i;
        while(temp>0){
            digit=temp%10;
            temp/=10;
            arm+=pow(digit,digits);
        }
        if(arm==i){
            printf(" %d is an armstrong number\n",i);
        }
    }
}