#include<stdio.h>
#include<string.h>
#include<ctype.h>
void toLower(char *str){
    for(int i=0;str[i];i++){
        str[i]=tolower(str[i]);
    }
}
int main(){
    char sentence[200],word[50];
    char sentence_lower[200],word_lower[50];

    printf("Enter First string: ");
    fgets(sentence,sizeof(sentence),stdin);
    printf("Enter second string: ");
    fgets(word,sizeof(word),stdin);

    sentence[strcspn(sentence,"\n")]=0;
    word[strcspn(word,"\n")]=0;

    toLower(sentence);
    toLower(word);
    int count = 0;
    char* ptr = sentence;
    while((ptr=strstr(ptr,word)) !=NULL){
        count++;
        ptr++;
    }
    printf("%d\n",count);
    return 0;

}
