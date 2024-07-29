#include<stdio.h>
void main()
{
    int num=28;
    int sum=0;
    for(int i=1 ;i<num;i++)
    {
        if(num % i == 0)
        {
            sum  += i;
        }
    }
    if(sum == num)
    {
        printf("it is a perfect number!!");
    }
    else
    {
        printf("-1");
    }
}
