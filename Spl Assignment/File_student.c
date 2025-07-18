#include<stdio.h>
struct Student{
    char name[50];
    int id;
    float gpa;
};

int main(){
    FILE *fptr;
    struct Student s;
    int i;

    fptr = fopen("student.txt", "w");
    if(fptr == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    printf("---Enter details for 2 students ---\n");
    for(i=0;i<2;i++){
        printf("\nEnter details for student %d:\n",i+1);
        printf("Name: ");
        scanf(" %[^\n]",s.name);
        printf("ID: ");
        scanf("%d", &s.id);
        printf("GPA: ");
        scanf("%f",&s.gpa);

        fprintf(fptr, "%s %d %.2f", s.name, s.id, s.gpa);
    }
    fclose(fptr);

    printf("\nStudent data saved to file succesfully! \n");

    printf("\n---Reading data from file ---\n");
    fptr = fopen("students.txt", "r");
    if(fptr == NULL){
        printf("Error opening file for reading!\n");
        return 1;
    }
    while(fscanf(fptr, "%s %d %f", s.name, &s.id,&s.gpa)==3){
        printf("Name: %s, ID: %d, GPA: %.2f",s.name,s.id,s.gpa);

    }
    fclose(fptr);
    return 0;
}
