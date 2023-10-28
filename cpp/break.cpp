#include <iostream>
using namespace std;

string hello(string name) {
    return name;
}

int main() {
    string n;
    string list[3];
    for(int i=0;i<3;i++){
        cout<<"Name "<<i+1<<":";
        cin>>n;
        list[i]=n;
    }
    string temp;
    for(int x=0;x<3;x++){
        temp=list[x];
        cout<<"HEllo, "<<hello(temp)<<endl;                                                                                           
    }  
}