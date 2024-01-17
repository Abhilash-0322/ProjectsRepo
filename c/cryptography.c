#include<stdio.h>
#include<string.h>
int main(){
    char string[20];
    printf("Enter your String:");
    scanf("%s",string);
    for(int i=0;i<strlen(string);i++){
        i%2==0?string[i]=string[i]++:string[i]--;
    }
    printf("%s",string);
}