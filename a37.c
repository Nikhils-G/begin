// Online C compiler to run C program online
#include <stdio.h>
int sumof(int num)
{
    int sum=0;
    int rem;
    while(num >0)
    {
        rem =num %10;
        sum=sum+rem*rem;
        num = num/10;
    }
    return num;
}
int check(int n)
{
    int sum1=n,sum2=n;
    while(1)
    {
        sum1=sumof(sum1);
        sum2=sumof(sumof(sum2));
        if(sum1==sum2)
        break;
    }
    return (sum1==1);
    
}
int main() 
{
    int n=20;
    if (check(n)) {
        printf("%d is a happy number.\n", n);
    } else {
        printf("%d is not a happy number.\n", n);
    }
    return 0;
}
