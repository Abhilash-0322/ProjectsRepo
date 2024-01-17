#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the %d element of the array",i);
        scanf("%d",&arr[i]);
    }
    // elementm=arr[1];
    printf("Array you entered is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int j=0;j<n;j++){
        for (int i=0;i<n-1;i++){
            if(arr[i+1]<arr[i]){
                int elementn=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=elementn;
            }
        }
    }
    printf("\nThe sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}