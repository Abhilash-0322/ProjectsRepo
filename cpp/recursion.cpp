#include<iostream>
using namespace std;

void draw(int a);
int main(){
    int a;
    cin>>a;
    draw(a);
}
void draw(int n){
    if(n<0){
        return;
    }
    draw(n-1);
    for (int i=0;i<=n;i++){
        cout<<"#";
    }
    cout<<endl;
    cout<<&n;
}