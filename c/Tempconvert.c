#include<stdio.h>
#include<string.h>
float convertToC(float temp);
float convertToF(float temp);
int main(){
    float temp;
    printf("enter the temprature value:");
    scanf("%f",&temp);
    char unit[20];
    printf("Enter the temprature Farenhiet or Celcius :");
    scanf("%s",unit);
    if(strcmp(unit,"Celcius")==0){
        float F=convertToF(temp);
        printf(" IN Farenhiet is :%f",F);
    }
    else if(strcmp(unit,"Farenhiet")==0){
        float C=convertToC(temp);
        printf("In Celcius is :%f",C);
    }
}
float convertToF(float temp){
    return temp*1.8+32;
}
float convertToC(float temp){
    return (temp-32)*0.56;
}