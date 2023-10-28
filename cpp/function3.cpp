#include<iostream>
using namespace std;
int sum(int a){
    int sum=0;
    sum+=a;
    return sum;
}
int main(){
    int a;
    cin>>a;
    int add=0;
    for(int i=0;i<=a;i++){
       add+=sum(i); 
    }
    cout<<add<<endl;
}