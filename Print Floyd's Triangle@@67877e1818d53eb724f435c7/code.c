// Your code here...
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=i;j<=i;j++)
        {
            printf("%d",j);
            printf(" ");
        }
        printf("\n");
        }
}