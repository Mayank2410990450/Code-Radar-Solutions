#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {  // Controls rows
        // Print spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
