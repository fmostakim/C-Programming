#include<stdio.h>
int main(){
    int array[5];
    int sum = 0;

    printf("Enter 5 Numbers: \n");
    for(int i = 0; i<5; i++){
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("The sum is: %d", sum);
    return 0;
}
