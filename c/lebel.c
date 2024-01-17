#include<stdio.h>
int main(){
    int i=0;
    red:
    if(i<10){
        goto yellow;
    }
    yellow:
    printf("%d ",i);
    i++;
    goto red;
}