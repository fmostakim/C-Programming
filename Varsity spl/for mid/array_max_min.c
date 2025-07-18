#include<stdio.h>
int main(){
    int arr[] = {5, 3, 7, 8, 2, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0], min = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}