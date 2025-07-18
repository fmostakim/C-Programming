#include<stdio.h>
void england(){
    printf("You are in England\n"); // 6
    return;
}
void australia(){
    printf("You are in Australia\n");  // 4
    england(); // calling england // 5
    return;
}
void bangladesh(){
    printf("You are in Bangladesh.\n");  // 2
    australia(); // calling australia // 3
    return;
}
int main(){
    bangladesh();  // calling Bangladesh
    return 0;
}