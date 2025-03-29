// Your code here...
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=x;i>=1;i--)
{
    for(char j='A';j<='A'+i;j++)
    {
        printf("%c",j);
    }
    printf("\n");
}}
