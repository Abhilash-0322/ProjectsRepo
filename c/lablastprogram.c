#include<stdio.h>
#include<string.h>
void stringcopy(char text []);
void stringlength(char text[]);
void stringjoin();
char text2[100];
int main(){
    char text[]="Hello this is some test";
    stringlength(text);
    stringcopy(text);
    stringjoin();
}
void stringlength(char text[]){
    int len=strlen(text);
    printf("%d\n",len);
}
void stringcopy(char text []){
    
    strcpy(text2,text);
    printf("%s\n",text2);
}
void stringjoin(){
    char text3[]="This is new text ,";
    char text4[100]="We are joining string and ";
    strcat(text4,text3);
    printf("%s\n",text4);
}