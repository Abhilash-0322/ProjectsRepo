#include<stdio.h>
int main(){
    int num;
    printf("Enter your number :");
    scanf("%d",&num);
    int ld=num%10;
    while(num>=10){
        num/=10;
    }
    int fd=num;
    int sum_ld_fd=ld+fd;
    printf("sum of the first and last digit of the entered number is :%d",sum_ld_fd);
}