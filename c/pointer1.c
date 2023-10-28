#include<stdio.h>
int main(){
    printf("hello world\n");
    int age=19;
    int *ptr=&age;
    printf("%p",ptr);
    printf("%u",ptr);
    *ptr+=5;
    printf("\n%d",*ptr);
    printf("\n%d",age);
    (*ptr)--;
    printf("\n%d",*ptr);
    int *ptr1=ptr;
    printf("\n%d",*ptr1);
    int **pptr=&ptr;
    printf("\n%d",**pptr);
}