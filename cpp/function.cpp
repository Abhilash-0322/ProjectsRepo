#include<iostream>
using namespace std;
bool check(int a1,int b1,int c1){
    int a,b,c;
    if((b*b==a*a+c*c) || (a*a==b*b+c*c) || (c*c==b*b+a*a)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a1,b1,c1;
    cin>>a1>>b1>>c1;
    if(check(a1,b1,c1))
        cout<<"Its a Pythagorean Triplet";
    else;
        cout<<"Its NOt";
}