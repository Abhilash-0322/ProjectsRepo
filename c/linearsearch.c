#include<stdio.h>
int main(){
    int n,num;
    printf("Enter the number of elements of your array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element of your array",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element you wnat to search");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            printf("Match found the number your entered is at index %d of the array",i);
            break;
        }
        else{
            printf("The element is not found in the array");
        }
    }
}