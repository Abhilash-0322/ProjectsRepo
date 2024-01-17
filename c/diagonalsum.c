#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the order of your matrix");
    scanf("%d%d",&m,&n);
    int mat1[m][n];
    printf("Enter the elements of your %dx%d matrix",n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("your entered matrix is given below\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    int sumdiagonal=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<=i;j++){
            sumdiagonal+=mat1[i][j];
        }
    }
    printf("The sum of the diagonal elements of your matrix is :%d",sumdiagonal);
}