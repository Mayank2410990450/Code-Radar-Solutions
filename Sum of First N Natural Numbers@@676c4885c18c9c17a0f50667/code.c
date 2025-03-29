// Your code here...
#include<stdio.h>
int main()
{
    
    int x,sum=0;
    scanf("%d",&x);
    for(int i=0;i<=x;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}