#include<stdio.h>
int iseven(int num){
    if (num % 2 == 0)
        return 1;
    else 
        return 0;
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (iseven(number))
        printf("%d is even.\n",number);
    else
        printf("%d is odd\n",number);
    
    return 0;
}