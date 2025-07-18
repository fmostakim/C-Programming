#include<stdio.h>
#include<string.h>
#include<ctype.h>
void vowelCount(char *str){
    int a=0,e=0,i=0,o=0,u=0;

    for(int j=0;j<strlen(str);j++){

        char ch = tolower(str[j]);

        if(ch=='a')
            a++;
        else if(ch=='e')
            e++;
        else if(ch=='i')
            i++;
        else if(ch=='o')
            o++;
        else if(ch=='u')
            u++;
    }

    printf("vowel: \n");
    printf("a: %d\n",a);
    printf("e: %d\n",e);
    printf("i: %d\n",i);
    printf("o: %d\n",o);
    printf("u: %d\n",u);


}

int main(){
    char sen[100];
    printf("Enter your sentence: ");
    scanf("%[^\n]", sen);
    vowelCount(sen);
    return 0;
}
