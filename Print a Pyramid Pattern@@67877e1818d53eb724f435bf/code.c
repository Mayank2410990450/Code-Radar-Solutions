#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            printf("m");
        }

        // Print stars in pyramid shape
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}

