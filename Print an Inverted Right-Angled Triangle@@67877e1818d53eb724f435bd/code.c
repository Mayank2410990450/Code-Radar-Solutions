// Your code here...
#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("*");
        printf(" ");
        
        
        for(int j=0;j<i;j++)
        {
            printf("\n*");
        }
        // printf(" ");
        
    }
}