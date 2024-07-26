#include<stdio.h>
int isprime(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n % i ==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n=13;
    for(int i=2;i<n/2;i++)
    {
        if(isprime(i)==0)
        {
            if(isprime(n-i)==0)
            {
                printf("%d %d ",i,n-i);
            }
        }
    }
    return 0;
}
