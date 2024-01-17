#include<stdio.h>
int main(){
    int year;
    printf("Enter your year:");
    scanf("%d",&year);
    if(year>0){
    year%4==0?printf("Year is a leap year"):printf("Year is not a leap year");
    }
    else{
        printf("The year is not valid");
    }
}