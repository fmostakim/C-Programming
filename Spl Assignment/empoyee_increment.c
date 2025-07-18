#include<stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    int scores[12];
};

int main(){
    int N;
    printf("Enter the number of employees: ");
    scanf("%d",&N);

    struct Employee employees[N];

    for(int i=0;i<N;i++){
        printf("\nEnter details for employee %d\n",i+1);
        printf("Enter ID: ");
        scanf("%d",&employees[i].id);
        printf("Enter name: ");
        scanf("%s",employees[i].name);
        printf("Enter salary: ");
        scanf("%f",&employees[i].salary);
        printf("Enter last 12 month's performance scores: \n");
        for(int j=0;j<12;j++){
            scanf("%d",&employees[i].scores[j]);
        }
    }
    printf("\n--- Increment Eligibility Report ---\n");
    for(int i = 0;i<N;i++){
        int total_scores = 0;
        for(int j=0;j<12;j++){
            total_scores +=employees[i].scores[j];
        }
        float average_score = (float)total_scores/12.0;

        if(average_score >= 80){
            printf("Employee with id: %d is eligible for increment\n",employees[i].id);

        }else if(average_score<80) {
            printf("Employee with id : %d is not eligible for increment\n",employees[i].id);

        }
    }
    return 0;
}
