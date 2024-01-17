#include<stdio.h>
int main(){
    char str[20];
    scanf("%[^\n]",str);
    printf("%s\n",str);
    scanf("%s",str);
    printf("%s",str);
    gets(str);
    puts(str);
}