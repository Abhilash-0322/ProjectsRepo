#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    scanf("%d",&a)&& scanf("%d",&b);
    printf("%d",sum(a,b));
}