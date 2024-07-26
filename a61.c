#include<stdio.h>
#include<string.h>
#include<math.h>

 int hexadecimal(char hex[])
{
    int n= strlen(hex);
    int decimal=0;
    int p=0;
    for(int i=n-1;i>=0;i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            int digit=hex[i]-'0';
            decimal += digit*pow(16,p);
            p++;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            int digit=hex[i]-'A'+10;
            decimal += digit*pow(16,p);
            p++;
        }
    }
    
    return decimal;
}
int main()
{
    char hex[100]="7B";
    printf("%d\n", hexadecimal(hex));
    return 0;
    
    
}
