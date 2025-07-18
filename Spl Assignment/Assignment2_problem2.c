#include<stdio.h>
struct Player{
    char username[50];
    int vitality;
    int magic;
    int defense;
    int attack;
};

int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i <= num/2;i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int digitSum(int num){
    if(num==0){
        return 0;
    }
    return (num%10) + digitSum(num/10);
}

int summation(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int main(){
    struct Player p;

    printf("Enter player username: ");
    scanf("%s", p.username);

    printf("Enter vitality: ");
    scanf("%d",&p.vitality);

    printf("Enter magic: ");
    scanf("%d",&p.magic);

    printf("Enter defense: ");
    scanf("%d",&p.defense);

    printf("Enter attack: ");
    scanf("%d",&p.attack);

    int totalStats = p.vitality + p.magic + p.defense + p.attack;

    int isSpectacular = 0;

    if(isPrime(totalStats)){
        int s = digitSum(totalStats);
        int sum_of_series = summation(s);
        int lastDigit = totalStats % 10;

        if(lastDigit !=0 && sum_of_series % lastDigit == 0){
            isSpectacular = 1;
        }
    }
    int luckValue;
    if(isSpectacular){
        printf("%d is a spectacular number\n",totalStats);
        luckValue = totalStats*10;
    }else{
        printf("%d is not a spectacular number\n", totalStats);
        luckValue = totalStats;
    }

    printf("Luck value for player %s is: %d\n", p.username, luckValue);

    return 0;




}
