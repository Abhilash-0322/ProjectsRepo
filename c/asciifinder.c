#include<stdio.h>
int main(){
    int c='A';
    int d='0';
    int e='1';
    printf("Ascii of 0 is: %d\n",d);
    printf("Ascii of 1 is %d\n",e);
    for (int i=0;i<26;i++){
        printf("The ascii value of %c is %d\n",c+i,c+i);
    }
}