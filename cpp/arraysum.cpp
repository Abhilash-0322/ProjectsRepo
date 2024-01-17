#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    vector<int>ar;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    return sum;
}