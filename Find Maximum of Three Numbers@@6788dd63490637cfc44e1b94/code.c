// Your code here...
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d ",&a,&b,&c);
    if(a>=c &&a>=b)
    {
        printf("%d",a);
    }
else if(b>=a &&b>=c)
    {
        printf("%d",b);
    }
    else if(c>=a &&c>=b)
    {
        printf("%d",c);
    }
    
}