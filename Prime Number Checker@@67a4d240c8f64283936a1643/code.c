// Your code here...
// Your code here...
int isPrime(int num)
{
    if(num==1 || num==0)
    {
        printf("%d",num);
    }
    else
    {
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d",num);
            break;
        }
    }
    }

}