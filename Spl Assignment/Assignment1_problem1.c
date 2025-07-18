#include<stdio.h>

int countWords(char str[]) {
    int i = 0, count = 0;
    int inword = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && inword == 0) {
            count++;
            inword = 1;
        } else if (str[i] == ' ') {
            inword = 0;
        }
        i++;
    }
    return count;
}

int nNoWordLength(char* str, int n) {
    int i = 0, wordCount = 0, length = 0;
    int inword = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && inword == 0) {
            wordCount++;
            inword = 1;
        }

        if (wordCount == n) {
            if (str[i] != ' ')
                length++;
        }

        if (str[i] == ' ') {
            inword = 0;
        }

        if (wordCount > n) break;

        i++;
    }

    return length;
}

int luckyString(char* str) {
    int totalOddLength = 0;
    int totalwords = countWords(str);

    for (int i = 1; i <= totalwords; i++) {  
        if (i % 2 == 1) {
            totalOddLength += nNoWordLength(str, i);
        }
    }

    if (totalOddLength == 7) return 1;
    else return 0;
}

int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str); 

    if (luckyString(str))
        printf("Yes.\n");
    else
        printf("No.\n");

    return 0;
}
