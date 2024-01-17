#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    int roots[2];
    printf("Enter The a,b,c of the quadratic to calculate its root:");
    scanf("%d%d%d",&a,&b,&c);
    roots[0]=-b+(sqrt((pow(b,2))-4*a*c)/2*a);
    roots[1]=-b-(sqrt((pow(b,2))-4*a*c)/2*a);
    for (int i=0;i<2;i++){
        printf("root%d is %d\n",i+1,roots[i]);
    }
}