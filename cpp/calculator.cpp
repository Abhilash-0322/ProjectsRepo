#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n1,n2;
    cout<<"Input a Numbers";
    cin>>n1>>n2;
    
    char op;
    cout<<"input your operator";
    cin>>op;
    switch(op){
    case '+':{
        cout<<n1+n2;
        break;
    }
    case '-':{
        cout<<n1-n2;
        break;
    }
    case '*':{
        cout<<n1*n2;
        break;
    }
    case '/':{
        cout<<n1/n2;
        break;
        }
    case '^':{
        cout<<pow(n1,n2);
        break;
    }
    case '%':{
        float result=fmod(n1,n2);
        cout<<result;
        break;
    }
    default:{
        cout<<"Invalid Operator";
        break;
    
    }
        }
    return 0;
}