#include<stdio.h>
void mystrcpy(char dest[], const char src[]){
    int i = 0;
    while (src[i]!='\0'){
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}

int main(){
    char source[]="Hello Mostakim!";
    char destination[50];

    mystrcpy(destination,source);

    printf("Source string is: %s\n",source);
    printf("Destination is: %s\n",destination);
}