// Your code here...
#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z')
    {
        printf("Lowercase");
    }
    else if(x>='A' && x<='Z')
    {
        printf("Uppercase");
    }
}