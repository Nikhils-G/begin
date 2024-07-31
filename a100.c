#include<stdio.h>
#include<string.h>
void check(char str[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        printf("%c",str[i]);
    }
    
    
}
int main()
{
    char str[]="javA";
    int n=strlen(str);
    check(str,n);
    return 0;
}
