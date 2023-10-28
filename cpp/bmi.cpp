#include<iostream>
using namespace std;
float bmi(float a,float b){
    auto c=a/((b*b)/10000);
    return c;
}
int main(){
    float weight,height;
    cin>>weight>>height;
    cout<<bmi(weight,height);
}