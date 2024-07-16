#include<stdio.h>
int main()
{
    int n,temp,sum=0,r;
    n=153;
    temp=n;
    while(n>0)
    {
        r= n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
