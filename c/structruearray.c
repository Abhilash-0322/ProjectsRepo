#include<stdio.h>
#include<string.h>
typedef struct Student{
    short int rollno;
    int age;
    char name[30];
    char section;
    float cgpa;
    char gender;
}Stu;
int main(){
    char tag[5];
    char pronoun[5];
    int n;
    printf("Enter the number of the students in the class:");
    scanf("%d",&n);
    struct Student IT[n];
    printf("Enter the details of the students of the class:\n");
    for(int i=0;i<n;i++){
        printf("Enter the details of the roll number %d:\n",i+1);
        printf("Roll No:");
        scanf("%d",&IT[i].rollno);
        printf("Name:");
        scanf(" %[^\n]s",IT[i].name);
        printf("\nAge:");
        scanf("%d",&IT[i].age);
        printf("\nSection:");
        scanf(" %c",&IT[i].section);
        printf("\nCGPA:");
        scanf("%f",&IT[i].cgpa);
        printf("\nGender:");
        scanf(" %c",&IT[i].gender);
    }
    for(int i=0;i<n;i++){
        if(IT[i].gender=='F' || IT[i].gender=='f'){
            sprintf(tag,"her");
            sprintf(pronoun,"she");
        }
        else{
            strcpy(tag,"his");
            strcpy(pronoun,"he");
        }
        printf("\nRoll No %d is %s %s age is %d, %s got CGPA of %f in section %c\n",IT[i].rollno,IT[i].name,tag,IT[i].age,pronoun,IT[i].cgpa,IT[i].section);
    }
}