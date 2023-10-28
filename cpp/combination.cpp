#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;   
}
int main(){
    int a,b;
    cin>>a>>b;
    int combination=factorial(a)/(factorial(b)*factorial(a-b));
        cout<<combination<<endl;  
}