#include<stdio.h>

int minimum(int a, int b) { // Renamed function
    int min = a;
    if (b < a) min = b;
    return min;
}

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            int a = i;
            if (i > n) a = 2 * n - i;
            int b = j;
            if (b > n) b = 2 * n - j;
            int min = minimum(a, b);
            printf("%d", n + 1 - min);
        }
        printf("\n");
    }
    
    return 0;
}
