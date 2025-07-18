#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    printf("%d\n",N);
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int notes_quantity;
    for(int i=0;i<7;i++){
        notes_quantity = N / notes[i];
        N = N % notes[i];
        printf("%d nota(s) de R$ %d,00\n",notes_quantity,notes[i]);
    }
    return 0;
}