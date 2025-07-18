#include<stdio.h>
#include<string.h>
int main(){
    char str1[20] = "Good";
    char str2[20] = "Morning";
    printf("Length of str1: %d\n", strlen(str1));
    printf("Concatenated: %s\n", strcat(str1, str2));
    return 0;
}