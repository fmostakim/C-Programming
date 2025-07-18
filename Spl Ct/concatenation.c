#include<stdio.h>
int main(){
    char str1[50]="Hello, ";
    char str2[] ="World!";
    int len1=0;
    int i=0;

    while(str1[len1]!='\0'){
        len1++;
    }
    
    while(str2[i]!='\0'){
        str1[len1 + i] = str2[i];
        i++;
    }
    str1[len1+i]='\0';

    printf("Concatenated string: %s\n",str1);
    return 0;
}