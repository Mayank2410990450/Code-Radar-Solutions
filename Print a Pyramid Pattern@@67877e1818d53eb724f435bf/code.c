#include<stdio.h>
int main()
    {
        int n;
        printf("Enter the value of n : ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("*");
            // for (int j = 0; j < n-i-1; j++)
            // {
            //     printf(" ");
            // }
            // for (int j = 0; j < i+1; j++)
            // {
            //     printf("* ");
            // }
            // printf("\n");
        }
        return 0;
    }
