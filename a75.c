#include<stdio.h>
int main()
{
    int n=6;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(6%i==0)
        {
            sum+=i;
        }
    }
    printf("%d ",sum);
    return 0;
}
