#include<stdio.h>
#include<math.h>
int convert(int num)
{
    int decimal=0;
    int i;
    while(num !=0)
    {
        int digit=num % 10;
        decimal+= digit*pow(8,i);
        i++;
        num /= 10;
    }
    return decimal;
}
int main()
{
    int num=653;
    printf("%d",convert(num));
    return 0;
}
