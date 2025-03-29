// Your code here...
#include<stdio.h>
int main()
{
    int n,y,arr[100],evencount,oddcount;
    scanf("%d",&x);
    for(int i=0;i<=x;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<x;i++)
{
    if(arr[i]%2==0)
    {
    evencount++;
    }
    else
    {
        oddcount++;
    }
}
printf("%d %d",evencount,oddcount);

}