#include<stdio.h>
#include<string.h>
int main(){
   char text[]="Hello World";
   for(int i=0;i<11;i++){
      for(int j=0;j<=text[i];j++){
      printf("%c",'H'+j);
      }
      printf("\n");
   }
}