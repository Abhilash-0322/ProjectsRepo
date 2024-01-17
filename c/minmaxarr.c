#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements for your array");
    scanf("%d",&n);
    int arr[n],min,max;
    for(int i=0;i<n;i++){
       printf("Enter the %d element of your array",i);
       scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(int i=0;i<n;i++){
       if(max<=arr[i]){
        max=arr[i];
       }
       if(min>=arr[i]){
        min=arr[i];
       }
    }
    printf("%d is the min element of the array while %d is the max element",min,max);
}