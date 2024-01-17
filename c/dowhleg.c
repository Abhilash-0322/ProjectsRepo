#include<stdio.h>
int main(){
    int i=9;
    int temp=i;
    do{
    int j=i;
    yellow:
        printf("hello world %d times left for loop no %d\n",j,temp+1-i);
        j--;
    if(j>0){
        goto yellow;
    }
    i--;
    }while(i>0);
}