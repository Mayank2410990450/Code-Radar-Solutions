// Your code here...
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            printf("%d",j);
            printf(" ");
        }
        printf("\n");
        }
}