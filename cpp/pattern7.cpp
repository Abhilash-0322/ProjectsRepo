#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int n;
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){        //or we can use n+1-i in pattern
            cout<<j<<" ";
        }
    cout<<endl;
    }
}