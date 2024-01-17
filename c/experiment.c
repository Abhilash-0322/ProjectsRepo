#include<stdio.h>
int main(){
    int x=(printf("AA")||printf("BB"));
    printf("%d",x);
    printf("\n");
    x=(printf("AA")&&printf("BB"));
    printf("%d",x);
}