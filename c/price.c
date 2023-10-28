#include<stdio.h>
void calculatePrice(float value);
int main(){
    float value=100.0;
    calculatePrice(value);
}
void calculatePrice(float value){
    value+=0.18*value;
    printf("value is :%f",value);
}