#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int num1=1000;
    int num2=200;
    int sum=num1+num2;
    if(abs(sum >-10000 && sum < 10000))
        printf("%d",sum);
    else
    {
        printf("-1");
    }
    
    
    return 0;
}
