#include<iostream>
using namespace std;
class Complex;
class calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumcomplex(Complex ,Complex);
        int sumcompComplex(Complex,Complex);
};
class Complex{
    int a,b;
    public:
        friend class calculator;
        //individually freind declaration
        friend int calculator :: sumcomplex(Complex ,Complex);
        friend int calculator :: sumcompComplex(Complex,Complex);
        void setNum(int n1,int n2){
            a=n1;
            b=n2;
        }
        // friend Complex sumcomplex(Complex c1,Complex c2);
        void printNUM(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int calculator:: sumcomplex(Complex c1,Complex c2){
            return (c1.a+c2.a);
        }
int calculator:: sumcompComplex(Complex c1,Complex c2){
            return (c1.b+c2.b);
        }
int main(){
    Complex c1,c2;
    c1.setNum(1,2);
    c1.printNUM();

    c2.setNum(5,7);
    c2.printNUM();

    calculator calc;
    int real=calc.sumcomplex(c1,c2);
    cout<<"Sum of real parts of c1 and c2 is:"<<real<<endl;
    int realc=calc.sumcompComplex(c1,c2);
    cout<<"Sum of complex parts of c1 and c2 is:"<<realc<<endl;

    return 0;
}