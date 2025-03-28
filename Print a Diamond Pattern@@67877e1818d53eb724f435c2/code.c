// Your code here...
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<x;j++)
        {
            printf(" ");
        }
        for(int j=0;(j<2*i-1);j++)
        {
            printf("*");
        }
         for (int i = x - 1; i >= 1; i--)
    {
        // Printing spaces
        for (int j = x; j > i; j--)
        {
            printf(" ");
        }

        // Printing numbers
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
    }
}