#include<stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter the order for your first matrix");
    scanf("%d%d",&r1,&c1);
    int mat1[r1][c1];
    printf("Enter the elements of your first array");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the order for your second matrix");
    scanf("%d%d",&r2,&c2);
    int mat2[r2][c2];
    printf("Enter the elements for your second array");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    if(c1==r2){
    int mat3[10][10];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            mat3[i][j]=0;
            for(int k=0;k<c1;k++){
                mat3[i][j]=mat3[i][j]+mat1[i][j]*mat2[i][j];
            }
        }
    }
    printf("The first matrix is :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    printf("Resultant matrix after multiplyting is bolow:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf(" %d\t ",mat3[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("The order of your matrixes is not suitable to multiply them\n");
    }
}