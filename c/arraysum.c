#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array elements");
    scanf("%d",&n);
    int arr[n],sum_arr=0;
    for(int i=0;i<n;i++){
        printf("Enter the %d element of your array",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum_arr+=arr[i];
    }
    printf("The sum of the elements of array is %d",sum_arr);
}