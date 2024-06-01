#include<iostream>
using namespace std;

class Bank{
    int Principal;
    int years;
    float rate;
    float amount;
    public:
        Bank(){}
        Bank(int p,float r,int t){
             Principal=p;
            rate=r;
            years=t;
            amount=Principal;
            for(int i=0;i<t;i++){
                amount=amount*(1+rate);
            }
        }
        Bank(int p,int r,int t){
            Principal=p;
            rate=float(r)/100;
            years=t;
            amount=Principal;
            for(int i=0;i<t;i++){
                amount=amount*(1+rate);
            }
        }
        void show();
};
void Bank::show(){
    cout<<endl<<"Principle amount was "<<Principal<<endl
        <<". Return value after "<<years
        <<" is "<<amount<<endl;
}
int main(){
    int p,r,t;
    float R;
    Bank bd1,bd2,bd3;
    cout<<"Enter the value of p r and t:"<<endl;
    cin>>p>>r>>t;
    bd1=Bank(p,r,t);
    bd1.show();
    cout<<"Enter the value for bd2 p r and t:"<<endl;\
    cin>>p>>R>>t;
    bd2=Bank(p,R,t);
    bd2.show();
    return 0;
}