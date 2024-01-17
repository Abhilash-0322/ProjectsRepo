#include<stdio.h>
int main(){
    int a[10],temp,n,i,j,m_sum=0,mi_sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>=1){
                if(a[j-1]>a[j]){
                    temp=a[j-1];
                    a[j-1]=a[j];
                    a[i]=temp;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
        printf(" ");
    for(i=0;i<n;i++){
        if(i>0){
            m_sum+a[i];
        }
    }
    m_sum=m_sum+a[0]-a[n-1];
    printf("%d %d",mi_sum,m_sum);
}