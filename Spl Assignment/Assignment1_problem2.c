#include<stdio.h>
#include<string.h>

struct Student
{
    char std_name[50];
    int result[4];
};

int Is_Even(int num){
    if(num % 2 == 0){
        return 1;
    }
    return 0;
}

int Fibonacci_Finder(int n){
    if(n <= 1){
        return n;
    }
    return Fibonacci_Finder(n-1) + Fibonacci_Finder(n-2);
}

int Fibo_sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += Fibonacci_Finder(arr[i]);
    }
    return sum;
}

int main(){
    struct Student student;
    printf("Name: ");
    fgets(student.std_name,sizeof(student.std_name),stdin);
    student.std_name[strcspn(student.std_name, "\n")] = '\0';
    
    printf("Physics Mark: ");
    scanf("%d",&student.result[0]);

    printf("Chemistry Mark: ");
    scanf("%d",&student.result[1]);

    printf("Biology Mark: ");
    scanf("%d",&student.result[2]);

    printf("Mathematics Mark: ");
    scanf("%d",&student.result[3]);

    int total_fibo_sum = Fibo_sum(student.result, 4);

    printf("Sum of the Fibonacci numbers= %d\n", total_fibo_sum);

    if(Is_Even(total_fibo_sum)){
        printf("%s has a Fibo-Even result\n", student.std_name);
    }else{
        printf("%s does not have a Fibo-Even result\n", student.std_name);
    }
    return 0;

}
