#include<stdio.h>
#include<string.h>
#include<ctype.h>
int is_vowel(char ch){
    ch = tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    return 0;
}

int main(){
    char input_str[201];
    char corrected_str[201];
    int j=0;

    printf("Enter the sentence said by Rahim: ");
    scanf("%[^\n]",input_str);
    //gets(input_str);

    if(strlen(input_str)>0){
        corrected_str[j++]=input_str[0];
        for(int i=1;i<strlen(input_str);i++){
            if(!is_vowel(input_str[i])|| input_str[i] != input_str[i-1]){
                corrected_str[j++] = input_str[i];
            }
        }
    }
    corrected_str[j]='\0';

    printf("Original sentence is: %s\n",input_str);
    printf("Corrected sentence: %s\n",corrected_str);
    return 0;

}
