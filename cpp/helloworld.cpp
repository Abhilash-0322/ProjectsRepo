#include<iostream>
#include<string>
using namespace std;
int main(){
    string text="Hello World I Am Abhilash Maurya";
    int n=text.size();
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<text[j];
        }
        cout<<endl;
    }
}