#include <stdio.h>

int main()
{
   int n,i;
   printf("Enter the digit- ");
   scanf("%d",&n);
   int r=0;
   for(i=0;i=n;i+=100){
        r = r*10;
        r = r + (n%10);
        n = n/10; 
    }
printf("reverse - %d",r);
}