#include<stdio.h>
int main(){
    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    printf("\n%d",x%2==0);
    int isSunday=1;
    int isSnowing=1;
    printf("\n%d",isSunday && isSnowing);
}