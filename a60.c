#include<stdio.h>
#include<math.h>

int convert(long long num)
{
    int i = 0, decimal = 0;
    
    // will only work for bases 2 - 10
    int base = 8;
    
    //converting octal to decimal
    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(base, i);

        num /= 10;
        i++;
    }
    return decimal;
}

//main program
int main()
{
    // long used rather than int to store large values
    long long octal;
    
    printf("Enter Octal Number: ");
    scanf("%lld", &octal);
    
    printf("Decimal: %lld", convert(octal));
    
    return 0;
}

