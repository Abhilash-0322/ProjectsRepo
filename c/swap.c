#include<stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);
int main(){
    int x,y;
    printf("Enter value of X:");
    scanf("%d",&x);
    printf("Enter value of Y:");
    scanf("%d",&y);
    swap(x,y);
    _swap(&x,&y);
    printf("\nValues of X in main after calling _swap:%d\nand value of y after calling _swap %d",x,y);
}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("value of x i.e a :%d\n\nand value of y i.e b:%d",a,b);
}
void _swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}