#include<stdio.h>

int countWords(char* str){
    int i = 0;
    int count = 0;
    int inword = 0;

    while(str[i] !='\0')
    {
        if(str[i] !=' ' && inword == 0){
            count++;
            inword = 1;
        }else if(str[i] == ' '){
            inword = 0;
        }
        i++;
    }
    return count;
    
}

int getMiddleWordStartIndex(char str[]){
    int total_words = countWords(str);
    int middle_position = (total_words/2)+1;

    int i = 0;
    int word_count = 1;
    while(word_count < middle_position){
        if(str[i] ==' '){
            word_count++;
        }
        i++;
    }
    return i;
}

int isDragon(char str[]){
    int  start_index = getMiddleWordStartIndex(str);
    int i = start_index;

    if(str[start_index] != '?'){
        return 0;
    }
    while(str[i] != ' ' && str[i] !='\0'){
        i++;
    }
    int last_char_index = i-1;

    if(str[last_char_index] != '#'){
        return 0;
    }

    for(i=start_index+1; i<last_char_index;i++){
        char c = str[i];
        if(!((c>='a' && c<='z') || (c>='A' && c<='Z'))){
            return 0;
        }
    }
    return 1;
}

int main(){
    char input_str[201];
    fgets(input_str,sizeof(input_str),stdin);
    int i=0;
    while(input_str[i] != '\0'){
        if(input_str[i] == '\n'){
            input_str[i] = '\0';
            break;
        }
        i++;
    }
    if(isDragon(input_str)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}