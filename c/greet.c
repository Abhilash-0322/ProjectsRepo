#include<stdio.h>
#include<string.h>
void Namaste();
void Bonjour();
void Greet();
void table(int n);
int main(){
    char language[20];
    printf("enter your language \"English\" or \"French\" or \"Hindi\": ");
    scanf("%s",language);
    
    if(strcmp(language,"Hindi")==0){
        Namaste();
    }
    else if(strcmp(language,"French")==0){
        Bonjour();
    }
    else if(strcmp(language,"English")==0){
        Greet();
    }
    int n;
    scanf("%d",&n);
    table(n);
    return 0;
}
void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}
void Greet(){
    printf("Hey How are You\n");
}
void table(int n){
    for (int i=0;i<=10;i++){
        printf("%d\n",n*i);
    }
}