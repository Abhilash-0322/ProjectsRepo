#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a;
    const string list[]={"\033[31m","\033[33m","\033[34m","\033[32m"};
    string list2[]={"`","^",".",">"};
    int k;
    cin>>a;
    for(int i=1;i<a;i++){
        for(int j=1;j<=i;j++){
            k=rand()%4;
            cout<<list[k]<<"*";
        }
        int spaces=2*a - 2*i;
        for(int j=1;j<=spaces;j++){
            if(k%2==0){
                int f=rand()%4;
                cout<<list[f]<<".";
            }
            else{
            cout<<" ";
            }
        }
        for(int j=1;j<=i;j++){
            k=rand()%4;
            cout<<list[k]<<"*";
        }
        cout<<endl;
    }
    
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            k=rand()%4;
            cout<<list[k]<<"*";
        }
        int spaces=2*a - 2*i;
        for(int j=1;j<=spaces;j++){
            if(k%2==0){
                int f=rand()%4;
                cout<<list[f]<<list2[f];
            }
            else{
            cout<<list[k]<<" ";
            }
        }
        for(int j=1;j<=i;j++){
            k=rand()%4;
            cout<<list[k]<<"*";
        }
        cout<<endl;
    }
    return 0; 
}