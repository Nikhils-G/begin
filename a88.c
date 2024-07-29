#include<stdio.h>

int check(int num)
{
    int temp= num;
    int reverse=0;
    int rem;
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }
    if(num == reverse)
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int min=100 ;
    int max=150;
    for(int i=min;i<=max;i++)
    {
        if(check(i))
        {
            printf("%d ,",i);
        }
    }
    return 0;
}
