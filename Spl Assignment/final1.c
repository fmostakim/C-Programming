#include<stdio.h>
int main(){
    int m,n,i,j,temp;
    printf("Enter the number of row: ");
    scanf("%d",&m);

    printf("Enter the number of column: ");
    scanf("%d",&n);
    int matrix[m][n];
    printf("Enter the elemnts of the matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }


    for(i=0;i<m;i++){
        for(j=0;j< n/2;j++){
            temp = matrix[i][j];
            matrix[i][j]=matrix[i][n-1-j];
            matrix[i][n-1-j]=temp;
        }
    }
    printf("\nThe reversed matrix is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
