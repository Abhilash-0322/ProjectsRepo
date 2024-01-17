#include<stdio.h>
int main(){
    int n;
    printf("Enter the value for your pascal triangle to show it on your console:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==1){
            for(int k=1;k<=((n-i)+1)/2;k++){
                printf(" ");
            }
            printf("1");
        }
        else{
            for(int k=1;k<=((n-i)+1)/2;k++){
                printf(" ");
            }
        for(int j=1;j<=i;j++){
            printf("1");
            
            printf("1");
            }
        }
    printf("\n");
    }
}