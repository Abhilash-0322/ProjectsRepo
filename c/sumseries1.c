#include<stdio.h>
#include<math.h>
void harmonic(int n);
void second_series(int a,int n);
int main(){
    int a,n,sum=0;
    printf("Enter the value of a and n respectively");
    scanf("%d%d",&a,&n);
    for(int i=1;i<n;i++){
        // sum+=(pow((1-a)));
        printf("hello world\n");
    }
    harmonic(n);
    second_series(a,n);
}
void harmonic(int n){
    float sum_harmonic=0;
    for(int i=1;i<=n;i++){
        printf(",1/%d",i);
        sum_harmonic+=(1/i);
    }
    printf("\n Sum of the harmonic series is :%f",sum_harmonic);
}
void second_series(int a,int n){
    float sum=a-a/3;
    for (int i=3;i<=n;i+=2){
        sum+=(1/i);
    }
    printf("\nThe sum of the second series is :%f",sum);
}