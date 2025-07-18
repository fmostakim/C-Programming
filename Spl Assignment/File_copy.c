#include<stdio.h>
int main(){
    FILE *sourceFile;
    FILE *destFile;
    char ch;

    sourceFile = fopen("Source.txt", "r");
    if(sourceFile == NULL){
        printf("Source file could not be opened!\n");
        return 1;
    }

    destFile = fopen("destination.txt", "w");
    if(destFile == NULL){
        printf("Destinatin file could not be created!\n");
        fclose(sourceFile);
        return 1;
    }


    while((ch = fgetc(sourceFile)) != EOF){
        fputc(ch,destFile);
    }
    printf("File copied succesfully!\n");

    fclose(sourceFile);
    fclose(destFile);
    return 0;
}
