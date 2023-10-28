#include<stdio.h>
float percentage(float marks,float total);
float main(){
    float marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    float total;
    printf("\nEnter the max Marks:");
    scanf("%d",&total);
    float percent=percentage(marks,total);
    printf("Percentage is :%f",percent);
}
float percentage(float marks,float total){
    float percent=(marks/total)*100;
    return percent;
}