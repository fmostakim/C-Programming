#include <stdio.h>

int main() {
    int size, i, j;

    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for (i = 1; i <= size; i++) {
        for (j = 1; j <= i; j++) {
            if (i == 1 || j == i || i == size) { // Fixed the condition here
                printf("*");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

