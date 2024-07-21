#include<stdio.h>
int cal(int m,int n)
{
    int sum=0;
    for(int i=12;i<=50;i++)
    {
        if(i%3==0&&i%5==0)
        {
            sum += i;
            
        }
    }
    return sum;
    
}
void main()
{
    int m=12;
    int n=50;
    int sum=cal(m,n);
    printf("%d",sum);
    
}
