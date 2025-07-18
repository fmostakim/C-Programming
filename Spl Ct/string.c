#include<stdio.h>
int main(){
    char str[20] ="Mostakim is best";
    int i = 0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        // printf("%c",*(str+i));
        i++;
    }
    return 0;
    
    
}