#include <iostream>
using namespace std;
int main(){
    int a;
    char b='A';
    cout<<"Enter No Of Rows:";
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            int c=b;
            cout<<c;
            b++;
        }
    cout<<endl;
    }
    return 0;
}