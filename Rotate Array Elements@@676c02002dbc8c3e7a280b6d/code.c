// Your code here...
#include<stdio.h>
int main()
{
    int k,arr1[100],n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&k);
    for(int i=n;i>=1;i--)
    {
        for(int j=k;j>=i;j--)
        {
            printf("%d",arr1[j]);

        }
        printf("/n");
    }

}