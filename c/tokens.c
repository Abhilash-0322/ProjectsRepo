#include<stdio.h>
#include<string.h>
#include<conio.h>
// int counttoken(){
//     token=strtok()
// }
int main(){
    int count=0;
    char string[]="printf (\"%d   \" , a)";
    char *token;
    token=strtok(string," ");
    while (token !=NULL){
        count++;
        token=strtok(NULL," ");
    }
    
    printf("%d",count);
    getchar();
}