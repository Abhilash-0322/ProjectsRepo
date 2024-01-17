#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char text[100];
    scanf("%[^\n]",text);
    int n=strlen(text);
    char result[100];
    result[0]=text[0];
    int count=1;
    for(int i=0;i<n;i++){
        if(text[i]==32){
            result[count]=text[i+1];
            count++;
        }
    }
    for(int i=0;i<count;i++){
        printf("%c",result[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
