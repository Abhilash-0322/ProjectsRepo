#include<stdio.h>
void simple_intrest(float p,float t,float r);
void compound_intrest(float p,float t,float r);
int main(){
    float principal,time,rate;
    printf("Enter the Principal Time and Rate:");
    scanf("%f%f%f",&principal,&time,&rate);
    simple_intrest(principal,time,rate);
    compound_intrest(principal,time,rate);
}
void simple_intrest(float p,float t,float r){
    float intrest=p*t*r/100;
    printf("Intrest on the given Principal is :%f\n",intrest);
}
void compound_intrest(float p,float t,float r){
    float intrest=0;
    float new_principal=p;
    for(int i=0;i<t;i++){
        intrest+=(new_principal*r)/100;
        new_principal+=intrest;
    }
    printf("The compounded Intrest :%f",intrest);
}