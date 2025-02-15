// Your code here...
#include <stdio.h>

int main() {
    int x, i, j;
    scanf("%d", &x);

    for (i = x; i > 0; i--) {  // Start from x and decrease
        for (j = 0; j < i; j++) { // Print decreasing number of stars
            printf("*");
        }
        printf("\n");
        printf(" "); // Move to the next line
    }

    return 0;
}
