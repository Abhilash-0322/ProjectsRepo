#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    int temp=a;
    int n=0;
    int last_digit;
    while(a>0){
        last_digit=a%10;
        n+=pow(last_digit,3);
        a=a/10;
    }
    if(n==temp){
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}