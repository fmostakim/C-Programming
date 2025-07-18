#include<stdio.h>
int main(){
    int arra[3];
    printf("Enter three number: \n");
    for(int i = 0;i<3;i++){
        scanf("%d", &arra[i]);
    }
    printf("You entered this:  \n");
    for(int i = 0;i<3;i++){
        printf("%d",arra[i]);
    }
    return 0 ;
}
