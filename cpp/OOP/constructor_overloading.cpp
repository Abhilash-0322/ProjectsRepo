#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        complex(int x){
            a=x;
            b=0;
            printNumber();
        }
        complex(int x,int y){
          a=x;
          b=y;
          printNumber();
        }
        void setData(int v1,int v2){
            a=v1;
            b=v2;
        }
        void sumComplex(complex o1,complex o2){
            a=o1.a+o2.a;
            b=o2.b+o2.b;
        }
        void printNumber(){
            cout<<"Your complex number is: "<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){

    complex c1(5);

    complex c2(2,4);

    c1.printNumber();

    c2.printNumber();
    
    return 0;
}