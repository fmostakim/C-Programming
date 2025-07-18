#include<stdio.h>
int main(){
    int n;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int al = 65;
        for(int j=1;j<=n+1-i;j++){

            // char ch = (char)al;
            printf("  ");
            // al++;
        }
        for(int k=1;k<=i;k++){
            char ch = (char)al;
            printf("%c ",ch);
            al++;
        }
        printf("\n");
        
    }
    return 0;
}