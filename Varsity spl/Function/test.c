// #include<stdio.h>
// int main(){
//     int n, m;
//     printf("Enter the value of n and m: ");
//     scanf("%d %d",&n,&m);

//     printf("Enter your 2d matrix: \n");
//     int a[n][m];
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             scanf("%d",&a[i][j]);
//         }
        
//     }
//     printf("Your 2d matrix is : \n");
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=m;j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");

//     }
//     return 0;

// }
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i+1;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}