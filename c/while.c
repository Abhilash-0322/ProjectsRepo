#include<stdio.h>
int main(){
    int i=1;
    while(i<10){
        printf("hi\n");
        i++;
    }
    int sum=0;
    int j=0;
    do{
        printf("%d\n",j);
        j++;
        sum+=j;
    }while(j<20);
    printf("\n%d",sum);
}
