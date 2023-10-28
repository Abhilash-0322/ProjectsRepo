#include<stdio.h>
int main(){
    int a=22;
    int b=a+1;
    printf("%d",b);
    int e,f=22;
    int *e_ptr=&e;
    printf("\n%d",e);

    for(int i=0;i<50;i++){
        printf("\n%d",*e_ptr-*e_ptr);
        e_ptr++;
    }
    return 0;
}