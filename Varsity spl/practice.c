// #include<stdio.h>
// int main(){
//     int n[10];
//     int a;
//     int sum =0;
//     float avg=0;
//     printf("Enter your total number: ");
//     scanf("%d",&a);

//     printf("Enter your number: \n");
//     for(int i=0;i<a;i++){
//         scanf("%d",&n[i]);
//         sum +=n[i];
        

        
//     }
//     for(int i=0;i<a;i++){
        
//         printf("I : %d value: %d\n",i,n[i]);
        
        
//     }
//     avg = (float)sum/a;
    
//     printf("Sum = %d\n",sum);
//     printf("Avarage is : %.2f",avg);
//     return 0 ;
// }


// 

// 
#include<stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}