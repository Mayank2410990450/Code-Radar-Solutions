// Your code here...
#include<stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        for(j=i;j<x;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);

        }
        printf("\n");
    }
}