#include<stdio.h>
int main(){
    float price[3];
    printf("Enter the pries of the Items:");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    for(int i=0;i<3;i++){
        printf("\nPrices of the Items are: %f",price[i]+price[i]*0.18);
    }
}