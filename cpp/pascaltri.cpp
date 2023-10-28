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
    int a;
    cin>>a;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=i;j++){
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
}