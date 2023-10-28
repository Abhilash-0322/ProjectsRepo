/*show me its output*/
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=0;i<=a;i++){
        if(i==0 || i==a){
            for (int j=0;j<b+2;j++){
                cout<<"*";
        }
    }
    else{
        cout<<"*";
        for(int k=0;k<=b-1;k++){
            cout<<" ";
        }
        cout<<"*";
    }
        cout<<endl;
    }
    return 0;
}