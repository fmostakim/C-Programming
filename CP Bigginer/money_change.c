#include<stdio.h>
#include<math.h>
int main(){
    double N;
    int notes, coins;
    int cents;

    scanf("%lf",&N);

    cents = (int) round(N*100);

    printf("NOTAS:\n");

    notes = cents/10000;
    printf("%d nota(s) de R$ 100.00\n",notes);
    cents %=10000;

    notes = cents/5000;
    printf("%d nota(s) de R$ 50.00\n", notes);
    cents %=5000;

    notes = cents / 2000;
    printf("%d nota(s) de R$ 20.00\n", notes);
    cents %=2000;

    notes = cents / 1000;
    printf("%d nota(s) de R$ 10.00\n",notes);
    cents %= 1000;

    notes = cents /500;
    printf("%d nota(s) de R$ 5.00\n", notes);
    cents %=500;

    notes = cents/200;
    printf("%d nota(s) de R$ 2.00\n", notes);
    cents %=200;


    printf("MOEDAS:\n");

    coins = cents / 100;
    printf("%d moeda(s) de R$ 1.00\n",coins);
    cents %=100;

    coins = cents / 50;
    printf("%d moeda(s) de R$ 0.50\n",coins);
    cents %= 50;

    coins = cents / 25;
    printf("%d moeda(s) de R$ 0.25\n",coins);
    cents %= 25;

    coins = cents / 10;
    printf("%d moeda(s) de R$ 0.10\n", coins);
    cents %= 10;

    coins = cents / 5;
    printf("%d moeda(s) de R$ 0.05\n",coins);
    cents %= 5;

    coins = cents / 1;
    printf("%d moeda(s) de R$ 0.01\n", coins);

    return 0;


}