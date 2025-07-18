#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("diary1.txt", "w");
    if(fptr == NULL){
        printf("You can't make file\n");
        return 1;
    }
    fprintf(fptr, "Yay! I am learning about files in C.\n");
    fflush(fptr);
    fclose(fptr);
    printf("Your diary writing is completed");
    return 0;
}
