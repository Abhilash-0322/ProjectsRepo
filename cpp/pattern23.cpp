#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}