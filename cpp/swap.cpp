#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int computed=1;
    cin>>a;
    cin>>b;
    const char * message{"hello world"};
    for(int i=0;i<b;i++){
        computed*=a;
    } 
    cout<<computed<<message;
}