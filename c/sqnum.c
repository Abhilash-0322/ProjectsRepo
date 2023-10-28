#include<stdio.h>
#include<math.h>
int Printsq(int num);
int Printcub(int num);
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("%d",Printsq(num));
}
int Printsq(int num){
    return pow(num,2);
}
int Printcub(int num){
    return pow(num,3);
}