#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
    }
int main(){
    int a;
    for(int i=1;i<=2;i++){
        cin>>a;
        cout<<fact(a)<<endl;
    }
}