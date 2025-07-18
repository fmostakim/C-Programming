#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of line: ");
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
            int a =65;
            //char ch= a(char);
        for(int j =1;j<=n+1-i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
