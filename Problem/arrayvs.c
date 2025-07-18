#include<stdio.h>
int main(){
    int n;
    printf("Enter what shape matrix do you want to make?(nxn): ");
    scanf("%d", &n);
   
    int matrix[n][n];
    
    printf("Enter %d numbers for  a %dx%d matrix:  ", n*n ,n,n);
    for(int i =0 ; i<n;i++){
        for(int j = 0; j<n ; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("This is the matrix, What you have made: \n");
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}