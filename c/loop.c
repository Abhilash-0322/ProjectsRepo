#include<stdio.h>
int main(void){
    for(int i=0;i<=10;i++){
        printf("%d",i);
    }
    int sum=0;
    for (int j=0;j<=8;j++){
        sum+=j;
        printf("\n%d",sum);
    }
}