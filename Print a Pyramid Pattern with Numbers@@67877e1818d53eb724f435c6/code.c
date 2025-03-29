#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) // Outer loop for rows
    {
        // Printing leading spaces
        for (int j = i; j <= x; j++)
        {
            printf(" ");
        }

        // Printing numbers
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}
