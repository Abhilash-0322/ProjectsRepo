#include<stdio.h>
#include<string.h>
float AreaCircle(float r);
float AreaRectangle(float l,float b);
float AreaSquare(float side);

int main(){
    char Figure[10];
    printf("Enter your figure:\n");
    scanf("%s",Figure);
    if(strcmp(Figure,"Circle")==0){
        float radius;
        printf("Enter the radius:\n");
        scanf("%f",&radius);
        printf("%f",AreaCircle(radius));
    }
    else if(strcmp(Figure,"Rectangle")==0){
        float length;
        float breadth;
        printf("Enter the Length and Breadth:\n");
        scanf("%f",length);
        scanf("%f",breadth);
        printf("%f",AreaRectangle(length,breadth));
    }
    else if(strcmp(Figure,"Square")==0){
        float side;
        printf("Enter the Side Of The Square\n");
        scanf("%f",&side);
        printf("%f",AreaSquare(side));
    }
}
float AreaCircle(float r){
    return 3.14*r*r;
}
float AreaRectangle(float l,float b){
    return l*b;
}
float AreaSquare(float s){
    return s*s;
}