#include<stdio.h>
#include<limits.h>
int myatoi(const char *str)
{
    int i=0;
    int sign=1;
    long long result=0;
    while(str[i]== ' ')
    {
        i++;
    }
    if(str[i]=='-' || str[i]=='+')
    {
        if(str[i]== '-')
        {
            sign=-1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i]<= '9')
    {
        result = result * 10 +(str[i]-'0');
        if(sign * result <= INT_MIN)
        {
            return INT_MIN;
        }
        if(sign * result >= INT_MAX)
        {
            return INT_MAX;
        }
        i++;
    }
    return (sign * result);
}

int main()
{
    const char *str1="-042";
    printf("%d",myatoi(str1));
}
