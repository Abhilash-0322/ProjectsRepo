#include<stdio.h>
void printaddress(int n);
void _printaddress(int *n);

int main(){
    int num;
    scanf("%d",&num);
    printaddress(num);
    printf("%p\n",&num);
    _printaddress(&num);
}
void printaddress(int n){
    printf("%p\n",&n);
}
void _printaddress(int *n){
    printf("value of the refrenced pointer to n:%p",n);
}