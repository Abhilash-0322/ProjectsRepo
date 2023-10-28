#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int n=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j<=a-i){
                cout<<" ";
            }else{
            cout<<"*";
            n+=1;
            }
        }
        cout<<endl;
    }
}