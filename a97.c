// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include <ctype.h>
void check(char str[],int n)
{
    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            count1++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            count2++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(count1>count2)
        {
            str[i]=tolower(str[i]);
        }
        else
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("%s",str);
}
int main() 
{
    char str[]="xYzAUKOP";
    int n=strlen(str);
    check(str,n);
    

    return 0;
}
