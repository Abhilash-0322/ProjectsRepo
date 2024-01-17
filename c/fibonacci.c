#include<stdio.h>
int main(){
    int fibn1=0,fibn2=1,fibn3=0,n;
    printf("The number of terms you want of the fibonanci series :");
    scanf("%d",&n);
    printf("%d %d ",fibn1,fibn2);
    for(int i=0;i<=n;i++){
        fibn3=fibn1+fibn2;
        printf("%d ",fibn3);
        fibn1=fibn2;
        fibn2=fibn3;
    }
}