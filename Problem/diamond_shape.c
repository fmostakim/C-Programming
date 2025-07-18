#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of upper row: ");
    scanf("%d", &n);

    int total_rows = 2*n -1;
    for(int i =1;i<=total_rows;i++){
        int spaces, stars;
        if(i<=n){
            spaces = n-i;
            stars = 2 * i - 1;
        }else{
            spaces = i - n;
            stars = 2*(total_rows - i + 1) - 1;
        }
        for(int j = 1; j<=spaces;j++){
            printf(" ");
        }
        for(int j = 1; j<= stars;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
