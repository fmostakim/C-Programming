#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1){
                printf("* ");
            }else if(i<=n/2){
                if(i==j || i+j == n-1){
                    printf("* ");
                }else{
                    printf("  ");
                }
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}