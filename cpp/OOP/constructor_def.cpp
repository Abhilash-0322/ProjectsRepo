#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    public:
        Simple(int a,int b=2){
            data1=a;
            data2=b;
            print();
        }
        void print(){
            cout<<"The value of data 1 is:"<<data1<<endl;
            cout<<"The value of data 2 is :"<<data2<<endl;
        }
};
int main(){
    Simple s(1,9);
    Simple q(5);
    return 0;
}