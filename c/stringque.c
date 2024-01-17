#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char num[1000];
    scanf("%s",num);
    int n=strlen(num);
    for(int i=0;i<10;i++){
        int count=0;
         printf("%c",num[i]);
        for(int j=0;j<n;j++){
            if(num[j]==i+30){
                count++;
            }
        }
        printf("%d ",count);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}