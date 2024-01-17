#include<stdio.h>
#include<string.h>
int main(){
    struct Student{
    char Name[30];
    int age;
    char section;
    float cgpa;
   };
    struct Student Abhilash;
    char name[30];
//    Abhilash.Name[30]="Abhilash Maurya";
    strcpy(Abhilash.Name,"Abhilash Maurya");
    Abhilash.age=18;
    Abhilash.section='M';
    printf("%s is from section %c and his age is %d\n",Abhilash.Name,Abhilash.section,Abhilash.age);
    printf("Enter the name of the Student your just seen:");
    scanf("%[^\n]s",name);
    printf("So the name is %s",name);
}