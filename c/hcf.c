#include<stdio.h>
int main(){
    int hcf=1;
    int firstno;
    int secondno;
    printf("Enter your first and the second numbers respectively:");
    scanf("%d%d",&firstno,&secondno);
    if(firstno>secondno){
        for(int i=1;i<=firstno;i++){
            if(firstno%i==0 && secondno%i==0){
                hcf*=i;
            }
        }
    }
    else{
        for(int i=0;i<=secondno;i++){
            if(firstno%i==0 && secondno%i==0){
                hcf*=i;
            }
        }
    }
    printf("The hcf of your entered numberes is :%d",hcf);
}