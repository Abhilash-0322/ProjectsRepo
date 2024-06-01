#include<iostream>
using namespace std;

class A{
    public:
    void Afunction(){
        cout<<"Function From A\n";
    }
};

class B{
    public:
    void Bfunction(){
        cout<<"Function From B\n";
    }
};

class C :public A,public B{
    public:
};

int main(){
    C a;
    a.Afunction();
    a.Bfunction();
    return 0;
}