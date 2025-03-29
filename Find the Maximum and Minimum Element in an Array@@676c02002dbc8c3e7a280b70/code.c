// Your code here...
#include<stdio.h>
int main()
{
    int x,y,arr[100],max,min;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<=x;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }
    }
printf("%d %d",max,min);
}