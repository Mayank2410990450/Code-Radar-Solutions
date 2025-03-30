// Your code here...
// Your code here...
void isPrime(int num)
{
    if(num==1 || num==0)
    {
        printf("%d",num);
    }
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d",num);
        }
    }

}