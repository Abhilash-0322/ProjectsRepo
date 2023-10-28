#include<stdio.h>
#include<string.h>
int main(){
    char subjects[5][50];
    int marks[3];
    char *other[]={"Physics","Chemestry","Maths"};
    strcpy(subjects[0],"Physics");
    strcpy(subjects[1],"Chemistry");
    strcpy(subjects[2],"Maths");
    
    for(int i=0;i<3;i++){
        printf("Enter Marks of %s:",subjects[i]);
        scanf("%d",&marks[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("Marks of %s is %d\n",subjects[i],marks[i]);
    }
}