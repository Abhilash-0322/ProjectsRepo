#include<stdio.h>
int main(){
    int aadhar[5]={63,93,69,17,01};
    int *ptr=&aadhar[0];
    for (int i=0;i<5;i++){
        printf("%d",*ptr+i);
    }
}