#include<stdio.h>
int main(){
    int arra[] = {1, 2, 3, 4, 5}, temp;

    int n = sizeof(arra) / sizeof(arra[0]);

    for(int i=0;i<n/2;i++){
        temp = arra[i];
        arra[i]=arra[n-i-1];
        arra[n-i-1]=temp;
    }

    printf("Reversed array: ");
    for(int i=0;i < n;i++){
        printf("%d ", arra[i]);
    }
    return 0;
}