#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the number of elemets of array 1 and 2 respectively:");
    scanf("%d%d",&n,&m);
    int arr1[n],arr2[m],arr3[n];
    if(n==m){
    for(int i=0;i<n;i++){
        printf("Enter the %d element of array 1:",i);
        scanf("%d",&arr1[i]);
        printf("Enter the %d element of array 2:",i);
        scanf("%d",&arr2[i]);
        arr3[i]=arr1[i]+arr2[i];
    }
    for(int i=0;i<n;i++){
        printf("The %d element of new array that is the sum of the prvious two arrays are is %d\n",i,arr3[i]);
    }
    }
    else{
        printf("The array elements are not equal so you can't find the sum of the elements of the array");
    }
}