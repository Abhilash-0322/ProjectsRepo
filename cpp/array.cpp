#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int max=array[0];
    int min=array[0];
    for(int i=0;i<n;i++){
        if(max<array[i]){
            max=array[i];
        }
        else if(min>array[i]){
            min=array[i];
        }
    }
    cout<<max<<endl;
    cout<<min;
}