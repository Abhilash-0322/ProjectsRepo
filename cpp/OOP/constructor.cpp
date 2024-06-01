#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex();
    void printNumber(){
            cout<<"Your complex number is: "<<a<<"+"<<b<<"i"<<endl;
        }
};
//constructors need to be in the public section;
//constructor do not have return type;
complex::complex(){
    a=7;
    b=4;
}
int main(){
    complex x;
    x.printNumber();
    return 0;
}