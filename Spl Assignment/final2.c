#include<stdio.h>

void inputData(int goals[],int mins[],int n){
    printf("Enter the details for each of %d matches: \n");

    for(int i=0;i<n;i++){
        printf("Match %d: \n",i+1);
        printf("  Enter goals scored: ");
        scanf("%d",&goals[i]);
        printf("   Enter minutes played: ");
        scanf("%d",&mins[i]);
    }
}

int countOfHatricks(int goals[], int n){
    int hatrick_count = 0;
    for(int i=0;i<n;i++){
        if(goals[i]>= 3){
            hatrick_count++;
        }
    }
    return hatrick_count;
}

int main(){
    int n;
    printf("Mr. Mostakim Season Statistics Calculator\n");
    printf("Enter total match: ");
    scanf("%d",&n);

    int goals_scored[n];
    int minutes_played[n];


    inputData(goals_scored,minutes_played,n);
    int total_hattricks = countOfHatricks(goals_scored,n);


    printf("Season Result:--------------\n");
    printf("Mr.Mostakim has scored a total of %d hatrick this this season\n",total_hattricks);

    return 0;
}
