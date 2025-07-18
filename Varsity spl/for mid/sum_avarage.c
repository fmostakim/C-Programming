#include<stdio.h>
int main(){
    int arr[]={10, 20, 30, 40, 50, 60},sum=0;
    float avg;
    int n = sizeof(arr)/sizeof(arr[0]);
    

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    avg = (float)sum/n;

    printf("Sum = %d\n",sum);
    printf("Avarage = %f",avg);

    return 0;
}