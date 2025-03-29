// Your code here...
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
{
    for(int j=0;j<x;j++)
    {
        printf(" ");
    }
    for(int j=0;j<(2*i-1); j++)
    {
        printf("%d",j);
    }
}
}