// Your code here...
#include <stdio.h>

int main() {
    int x, i, j;
    scanf("%d", &x);

    for (i = 0; i <= x; i++) {  // Start from x and decrease
        for (j = 0; j < i; j++) { // Print decreasing number of stars
            printf("*");
            printf(" ");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
