#include<stdio.h>
int main(){
    int a=2;
    int flag=0;
    while (!flag){
        (a>=19)? printf("yes its greater."),flag++ : printf("enter bigger than that:") && scanf("%d",&a); 
    }
    for(int i=0;i<9;i++){
            printf("%d\n",i);
        }
}