#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    int array={22,30,23};
    int *_ptr=array;
    printf("%d",_ptr);
}