#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int x,int y){
        a=x;
        b=y;
    }
    void printNumber(){
            cout<<"Your complex number is: "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    complex c1(1,2);
    c1.printNumber();
    complex c2=complex(4,3);
    c2.printNumber();
    return 0;
}