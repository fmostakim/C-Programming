// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         int digit = n;

//         for(int j=1;j<=i;j++){
//             printf("%d ",digit);
//             digit--;
            
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)%2==0) printf("1 ");
//             else printf("0 ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<n+1-i;j++){
//             printf("  ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<n+1-i;j++){
//             printf("  ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("  ");
//         }
//         for(int j=1;j<=2*i-1;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of upper row: ");
//     scanf("%d",&n);
//     int total_rows=2*n-1;

//     for(int i=1;i<=total_rows;i++){
//         int stars, spaces;

//         if(i<=n){
//             stars = 2*i - 1;
//             spaces = n-i;
//         }
//         else{
//             stars = 2*(total_rows-i+1)-1;
//             spaces = i-n;
//         }
//         for(int j=1;j<=spaces;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=stars;j++){
//             printf("*");
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
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(int j=1;j <= 2*(n-i);j++){
            printf("  ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}