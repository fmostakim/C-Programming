#include<stdio.h>
int main(){
    /*int row,column;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &column);*/
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    for(int i = 1; i <= size;i++){
        for(int j = 1; j<=size; j++){
            printf("%d\t",i*j);
        }
        printf("\n");
    }
    return 0;
}
