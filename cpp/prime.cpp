#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int divisor=2;
    if (n>2){
        while (divisor<n){
            if(n%divisor==0){
                cout<<"Not Prime";
                    return 0;
            }
            else{
                divisor+=1;
            }
        }
    }
    cout<<"Prime";
}