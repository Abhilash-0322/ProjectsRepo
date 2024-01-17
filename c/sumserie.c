#include<stdio.h>
#include<math.h>
int main(){
    int n,sumseries=0;
    printf("Enter the value of n for your series :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      if(i%2!=0){
        sumseries+=pow(i,2);
      }
    }
    printf("The sum of the given series 1^2+ 3^2 + 5^2 ....%d^2 is :%d",n,sumseries);
}