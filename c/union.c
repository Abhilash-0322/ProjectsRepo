#include<stdio.h>
typedef union Student{
    int rollno;
    char name[30];
    int age;
}Ist;
int main(){
    Ist s1;
    s1.age=18;
    printf("%d\n",s1.age);
    s1.name[30]="Ronaldo";
    printf("%s\n",s1.name);
}