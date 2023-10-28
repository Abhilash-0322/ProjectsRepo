#include<stdio.h>
int count=1;
void printGoodbye();
int printHello(){
    printf("hello\n");
    count++;
    if(count>9){
        return 0;
    }
    printHello();
}
int main(){
    
    printf("hello world\n");
    printHello();
    printGoodbye();
}
void printGoodbye(){
    printf("goodbye\n");
}