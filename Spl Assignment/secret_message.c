#include<stdio.h>
#include<string.h>
#include<ctype.h>

int is_vowel(char ch){
    ch=tolower(ch);

        return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

}
int main(){
    char msg[100];
    printf("Enter your messege: ");
    scanf(" %[^\n]",msg);

    for(int i=0;i<strlen(msg);i++){
        if(isalpha(msg[i])){
            if(!is_vowel(msg[i])){
                if(msg[i]=='Z'){
                    msg[i]='A';
                }else if(msg[i]=='z'){
                    msg[i]='a';
                }else{
                    msg[i]++;
                }
            }
        }
    }
    printf("%s",msg);
    return 0;
}

