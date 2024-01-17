#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    printf("ENTER THE VALUE OF B = \n");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("the value of a=%d and b=%d",a,b );
    return 0;
}