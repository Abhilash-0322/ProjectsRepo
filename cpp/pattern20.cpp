#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the width and height for your pattern :";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}