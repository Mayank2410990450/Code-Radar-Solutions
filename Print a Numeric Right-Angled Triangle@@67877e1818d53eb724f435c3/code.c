#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x); // Input number of rows

    for (int i = 1; i <= x; i++) // Changed from i < x to i <= x
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", j);
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}
