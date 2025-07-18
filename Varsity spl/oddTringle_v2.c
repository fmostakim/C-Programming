#include <stdio.h>

int main() {
    int n = 4; // Number of rows
    int num = 1; // Starting odd number

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (num % 2 != 0) { // Check if 'num' is odd
                printf("%d ", num);
            }
            num += 1; // Increment the number
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
