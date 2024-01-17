#include<stdio.h>
void print_hi();
int main(){
    int a;
    a=6;
    if(a=7){
        printf("HI\n");
        print_hi();
    }
    else{
        printf("Hello");
    }
}
void print_hi(){
    printf("hi");
}