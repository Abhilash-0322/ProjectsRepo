#include<stdio.h>
void pattern2(){
    int n;
    printf("Enter the value of n for your pattern :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n+1)/2){
                printf("*");
            }
            else{
                if(j==(n+1)/2){
                    for(int k=1;k<=n/2;k++){
                    printf(" ");
                }
                printf("*");
                }
            }
        }
        printf("\n");
    }
}
void copypattern2(){
    int n;
    printf("Enter the value of n for your pattern :");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i==(n+1)/2){
        for(int j=1;j<=n;j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(int k=1;k<=n/2;k++){
                printf(" ");
            }
            printf("*");
            printf("\n");
            }
        }
        printf("\n");
}
void pattern3(){
    
}
int main(){
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    pattern2();
}