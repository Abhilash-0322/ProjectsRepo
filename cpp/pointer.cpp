#include<iostream>
using namespace std;
int main(){
    char b='B';
    int a=b;
    int * p=&a;
    cout<<*p;
}