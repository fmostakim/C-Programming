#include<stdio.h>
int main(){
    int n;
    
    
    printf("Enter a number: ");
    scanf("%d",&n);

    int matrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);

        }
    }

    printf("This is your matrix: \n");


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}