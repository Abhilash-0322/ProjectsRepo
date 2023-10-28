#include<stdio.h>
#include<math.h>

int main(){
    int a=2;
    int b=3;
    int c=pow(a,b);
    printf("%d",c);
    // printf("%d",d);
    printf("\n%d",b%a);
    printf("\n%f",3/2.0);
    int e=(int) 2.9999;
    printf("\n%d",e);
    printf("\n%d",4*3/6*2);
    printf("\n%d",3==3);
    printf("\n%d",3==2 && 2==2);
    printf("\n%d",!(3==3||1==7));
    printf("\n%d",!!(3==3||1==7));
}