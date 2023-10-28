#include <windows.h>
#include <stdio.h>
int mian(){
    int age=19;
    int *ptr=&age;
    printf("%p",ptr);
    return 0;
}