// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter a index: ");
//     scanf("%d %d",&n,&m);
//     int matrix[n][m];
    

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d",&matrix[i][j]);
//             printf("You entered %d as [%d][%d]\n",matrix[i][j],i,j);
//         }
//     }
//     printf("Your matrix is: \n");
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
        
//     return 0;
// }

// 

#include<stdio.h>
int main(){
    int n;
    int sum=0, fact=1;
    printf("Enter the value of term : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact *=i;
        sum +=fact;
    }
    printf("the ans is %d\n",sum);
    return 0;
}