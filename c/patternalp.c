#include<stdio.h>
void patternalpha(){
    int n;
    printf("The number is :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                printf("a ");
            }
            else{
                printf("b ");
            }
        }
        printf("\n");
    }
}
int main(){
    int n,flag;
    printf("The number is :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            flag=0;
        }
        for(int j=1;j<=i;j++){
            if(flag==0){
            printf("a ");
            flag++;
            }
            else{
            printf("b ");
            flag--;
            }
        }
        printf("\n");
    }
    patternalpha();
}