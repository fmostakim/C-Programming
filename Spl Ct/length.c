#include<stdio.h>
int main(){
    char str[100];
    int length = 0;
    int i =0;
    puts("Enter a string: ");
    gets(str);

    while(str[i]!='\0'){
        length++;
        i++;
    }

    printf("Length of the string: %d",length);
    return 0;

}