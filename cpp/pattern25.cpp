#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n for your pattern";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j==(n+1)/2){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}