#include<stdio.h>
int binaryodecimalconvert(int num)
{
    int sum =0;
    int base = 1;
    while(num >0 )
    {
        
        int rem=num % 2;
        sum +=rem*base;
        base = base *2;
        num = num /10;
    }
    return sum;

}
int decimaltoOctalconvert(int num)
{
    int num1 = binaryodecimalconvert(num);
    int sum =0;
    int arr[32];
    int i=0;
    while(num1 >0 )
    {
        
        arr[i]=num1%8;
        i++;
        num1 = num1 /10;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}
int main()
{
    int num=1010;
    decimaltoOctalconvert(num);
    return 0;
}
