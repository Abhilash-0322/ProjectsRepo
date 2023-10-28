#include<iostream>
using namespace std;
int selectionsort(int array[],int n,int key){
    int s=0;
    
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(mid==key){
            return mid;
        }
        else if(mid>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<selectionsort(array,n,key);
}