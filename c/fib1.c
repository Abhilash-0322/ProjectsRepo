#include<stdio.h>
int main(){
    int n,a=0,b=1,c=0;
    printf("Enter the number upto which fibonnachi should be print");
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    for(int i=a;i<=n;i=a+b){
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
}