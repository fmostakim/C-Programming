#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll_number;
    float marks;
};
int main(){

    struct student students[3];
    int i;

    printf("Enter details for 3 students: \n");

    for ( i = 0; i < 3; i++)
    {
        printf("Enter Name: ");
        scanf(" %s",students[i].name);
        
        printf("Enter Roll Number: ");
        scanf("%d",&students[i].roll_number);

        printf("Enter marks: ");
        scanf("%f",&students[i].marks);

    }

    printf("\n--- Student Information ---\n");

    for ( i = 0; i < 3; i++)
    {
        printf("\nStudent %d:\n",i+1);
        printf("Name: %s\n",students[i].name);
        printf("Roll Number: %d\n",students[i].roll_number);
        printf("Marks: %.2f\n",students[i].marks);
    }
    return 0;
    
    
}
