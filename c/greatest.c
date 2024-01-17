#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input your three numbers by spacing:");
    scanf("%d%d%d",&a,&b,&c);
    a>b && a>c?printf("%d Is greatest",a):b>c?printf("%d is greatest",b):printf("%d is greatest",c);
    return 0;
}