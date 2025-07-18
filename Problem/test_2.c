// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ",j);
//         }
//         for(int j=1;j <= 2*(n-i);j++){
//             printf("  ");
//         }
//         for(int j=i;j>=1;j--){
//             printf("%d ",j);
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

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n||i==n/2 +1 ) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }   
    return 0;
}