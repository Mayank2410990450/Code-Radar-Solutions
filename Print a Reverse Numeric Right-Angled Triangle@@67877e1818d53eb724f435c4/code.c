// Your code here...
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=0;i<=x;i++)
    {
        for(int j=i;j<=x;j++)
        {
            printf("*");
            }
            printf("\n");
    }
}