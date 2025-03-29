// Your code here...
#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x); // Input number of rows

    for (int i = 1; i <= x; i++) // Outer loop for rows
    {
        for (int j = 1; j <= i; j++) // Inner loop for numbers in each row
        {
            // Print 1 if (i + j) is odd, otherwise print 0
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
