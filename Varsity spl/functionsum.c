#include<stdio.h>
int add(int num1 , int num2){
    return num1 + num2;

}
int main(){
    int num1,num2,result;

    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);
    
    result = add(num1, num2);
    printf("The sum is %d\n",result);
    return 0;
}