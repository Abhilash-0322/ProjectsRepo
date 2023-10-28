#include<iostream>
using namespace std;
bool prime(int a){
    if(a<2){
        return false;
    }
    for(int j=2;j<a;j++){
        if(a%j==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num1,num2;
    int temp;
    cin>>num1>>num2;
    if(num1>num2){
        swap(num1,num2);
    }
    for(int i=num1;i<=num2;i++){
        if(prime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}