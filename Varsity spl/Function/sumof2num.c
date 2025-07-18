#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main(){
    int a, b;
    printf("Enter the first num: ");
    scanf("%d",&a);
    printf("Enter the second num: ");
    scanf("%d",&b);

    int sum = add(a,b);
    printf("Result: %d\n",sum);
    return 0;

}