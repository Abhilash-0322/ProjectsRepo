#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<a-j;
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}