// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=0;i<=10;i++)
    {
        printf("%d x %d = %d",x,i,x*i);
        printf("\n");
    }
}