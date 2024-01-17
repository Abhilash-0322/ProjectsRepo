#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n for your pattern";
    cin>>n;
    while(n>0){
        for(int i=0;i<n;i++){
            cout<<"* ";
        }
        n--;
        cout<<endl;
    }
}