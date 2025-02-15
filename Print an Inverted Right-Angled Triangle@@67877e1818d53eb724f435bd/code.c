// Your code here...
#Include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=0;i<=x;i++)
    {
        printf("*");
        for(int j=0;j<=x;j++)
        {
            printf("*");
        }
    }
}