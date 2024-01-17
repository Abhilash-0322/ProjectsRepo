#include<stdio.h>
#include<math.h>
void linear_search(int arr[],int k,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d is found at %d in the array\n",arr[i],i);
            flag++;
            break;
        }
    }
    if(flag==0){
        printf("Element is not found\n");
    }
}
int sorting(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Array after being sorted becomes:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int binary_search(int arr[],int n,int k){
    int low=0,high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(k==arr[mid]){
            printf("\n%d is found at %d index by binary search",k,mid);
            break;
        }
        else if(k<arr[mid]){
            high=mid+1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
    int n,k;
    printf("Enter the number of elements for your array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of your array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element your want to search for:");
    scanf("%d",&k);
    linear_search(arr,k,n);
    sorting(arr,n);
    int a=binary_search(arr,n,k);
}