#include<stdio.h>
int main(){
    int matrix1[2][2];
    int matrix2[2][2];
    int result[2][2];

    printf("Enter elements for first 2x2 matrix : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Element[%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter elements for second 2x2 matrix : \n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j]=matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The result is : \n");

    for (int i = 0; i < 2; i++)
    {
        for(int j=0;j<2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
    


}