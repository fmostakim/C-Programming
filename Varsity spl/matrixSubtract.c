#include<stdio.h>
int  main(){
    int A[3][3];
    int B[3][3];
    int result[3][3];

    printf("Enter the element for first 3x3 matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the element for second 3x3 matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Element[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           result[i][j] = A[i][j]-B[i][j];
        }
    }

    printf("The result is : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",result[i][j]);
            
        }
        printf("\n");
    }

    return 0;




}