// Your code here...
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=i;j<x;j++)
        {
            printf(" ");
        }
        for(char j='A';j<='A'+i;j++)
        {
            printf("%c",j);
            printf(" ");
        }
        printf("\n");
    }
}