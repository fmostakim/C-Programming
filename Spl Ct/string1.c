#include<stdio.h>
#include<string.h>

int main(){
    // char str[40]="Hello Mostakim";
    // puts(str);

    char str[40];
    // scanf("%s",str); //Only the first word will be considered
    gets(str); // entire sentence can be input
    printf("Your input is: %s",str);

    return 0;
}