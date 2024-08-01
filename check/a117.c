#include<stdio.h>
#include<string.h>
char* convert(char* str)
{
    int n=strlen(str);
    for(int i=n-1;i>=0;i--)
    {
       if((str[i]-'0') % 2 != 0 )
       {
           str[i+1]='\0';
           return str;
       }
    }
    return "";
}
int main()

{
    char str[]="52";
    int n=strlen(str);
    printf("%s",convert(str));
    return 0;
}

