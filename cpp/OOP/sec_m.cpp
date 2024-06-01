#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    student(){
        // name="Nan";
        // age=0;
        // gender=0;
        cout<<"Default Constructor"<<endl;
    }//default

    student(string n,int a,bool gen){
        cout<<"Copy constructor";
        name=n;
        age=a;
        gender=gen;
    }

    student(student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }

    void printInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl<<endl;
    }

    bool operator==(student &a){
        if(name==a.name&& age==a.age&& gender==a.gender){
            return true;
        }
        else{
            return false;
        }
    }
};

struct students{
    string name;
    int age;
    bool gender;
};


int main(){
    student Tim;
    Tim.name="Tim";
    Tim.age=19;
    Tim.gender=1;
    char gen;
    student arr[3];
    
    for(int i=0;i<3;i++){
        cout<<"Name :";
        cin>>arr[i].name;
        cout<<"Age :";
        cin>>arr[i].age;
        cout<<"Gender :";
        cin>>gen;
        arr[i].gender=gen>72?1:0;
    }

    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }

    return 0;
}