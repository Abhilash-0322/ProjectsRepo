#include<stdio.h>
int main(){
int num,temp,newnum=0,digit;
printf("Enter your number :");
scanf("%d",&num);
temp=num;
while(num>0){
digit=num%10;
newnum=newnum*10+digit;
num/=10;
}
if(newnum==temp){
printf("\nThe number is palindrome");
}
else{
printf("\nThe number is not palindrome");
}
}