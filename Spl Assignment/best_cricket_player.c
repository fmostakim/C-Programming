#include<stdio.h>
#include<string.h>
#define NUM_CRICKETERS 3
#define NUM_MATCHES 4

struct Cricketer{
    char name[50];
    char country[50];
    char type [10];
    int wickets[NUM_MATCHES];
    int runs[NUM_MATCHES];
    int total_matches_played;
    float overall_performance_score;

};

int main(){
    struct Cricketer players[NUM_CRICKETERS];

    for(int i=0; i<NUM_CRICKETERS; i++){
        printf("\n---Enter Details for cricketers %d---\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]",players[i].name);
        printf("Country: ");
        scanf(" %[^,\n]",players[i].country);
        printf("Type(bowler/batsman): ");
        scanf(" %s",players[i].type);
        printf("Total matches played in last year: ");
        scanf("%d",&players[i].total_matches_played);
        int total_runs=0;
        printf("Enter runs for the last %d matches: \n",NUM_MATCHES);
        for(int j=0;j<NUM_MATCHES;j++){
            scanf("%d",&players[i].runs[j]);
            total_runs +=players[i].runs[j];
        }
        int total_wickets = 0;
        printf("Enter wickets for the last %d matches: \n",NUM_MATCHES);
        for(int j=0;j<NUM_MATCHES;j++){
            scanf("%d",&players[i].wickets[j]);
            total_wickets += players[i].wickets[j];
        }
        if(strcmp(players[i].type,"batsman")==0){
            if(players[i].total_matches_played > 0){
                players[i].overall_performance_score = (float)total_runs/players[i].total_matches_played;
            }else{
                players[i].overall_performance_score = 0;
            }
        }else if(strcmp(players[i].type,"bowler")==0){
            if(players[i].total_matches_played>0)
                players[i].overall_performance_score = (float)total_wickets/players[i].total_matches_played;
            else
                players[i].overall_performance_score = 0;
        }
    }
    int winner_index = 0;
    for(int i = 1;i<NUM_CRICKETERS;i++){
        if(players[i].overall_performance_score>players[winner_index].overall_performance_score){
            winner_index = i;
        }
    }


    printf("\n---Cricketer of the year---\n");
    printf("Name: %s\n",players[winner_index].name);
    printf("Country: %s\n", players[winner_index].country);
    printf("Type: %s\n",players[winner_index].type);
    printf("Total Matches Played: %d\n",players[winner_index].total_matches_played);
    printf("Overall Performance Score: %.2f\n",players[winner_index].overall_performance_score);
    return 0;
}
