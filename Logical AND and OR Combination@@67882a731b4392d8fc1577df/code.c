#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    // Check if x >= 0 and y <= 0
    if ((x > 0 && y < 0)||(x==y && y==0))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
