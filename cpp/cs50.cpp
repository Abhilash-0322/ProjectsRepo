#include<iostream>
#include<string>
using namespace std;

/*int main(){
    int a;
    cin>>a;
    cout<<decimaltooctal(a);
    
}
int decimaltooctal(int a){
    int value=0;
    return ;
}*/
int main(){
    typedef struct{string name;string number;}person;
    person people[2];
    people[0].name="david";
    people[0].number="73998705324";
    
    string n;
    cin>>n;
    for(int i:people){
        if(strcmp(people)[i].name==0){
            cout<<"found";
            return 0;     
        }
    }
    cout<<"Not Found";
    return 1;
}