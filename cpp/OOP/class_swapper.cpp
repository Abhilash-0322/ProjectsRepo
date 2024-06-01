#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    friend void swap(c1 &,c2 &);
    public:
        void input(int a){
            val1=a;
        }
        void printer(){
            cout<<"Value of c1 data is:"<<val1<<endl;
        }
};

class c2{
    int val2;
    friend void swap(c1 &,c2 &);
    public:
        void input(int a){
                val2=a;
            }
        void printer(){
            cout<<"Value of c2 data is:"<<val2<<endl;
        }
};

void swap(c1 &x,c2&y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){
    c1 x;
    c2 y;
    x.input(5);
    
    y.input(9);

   x.printer();
   y.printer();
   swap(x,y);
   cout<<"After swapping:\n";
   x.printer();
   y.printer();


    return 0;
}