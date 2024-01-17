#include<stdio.h>
int main(){
    int arr[30],n,even_sum=0,odd_sum=0;
    printf("Enter the value of n for your array:");
    scanf("%d",&n);
    printf("Enter the elements for your array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            printf("Even index is %d and The element at this index is %d\n",i,arr[i]);
            even_sum+=arr[i];
        }
        else{
            printf(" Odd index is %d and The element at this index is %d\n",i,arr[i]);
            odd_sum+=arr[i];
        }
    }
    printf("Sum of odd index elements is %d\n",odd_sum);
    printf("Sum of even index elements is %d\n",even_sum);
}