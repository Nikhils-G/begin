#include<string.h>
#include<stdio.h>
void check(char str[],int n)
{
    char newstr[n+1];
    int re=0;
    int wordstart=0;
    int currentlength;
    int maxlength=0;
    for(int i=0;i<n;i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            currentlength = i - wordstart;
            if(currentlength>maxlength)
            {
                maxlength=currentlength;
                re=0;
                for(int j=0;j<currentlength;j++)
                {
                    newstr[re++]=str[wordstart+j];
                }
                newstr[re]='\0';
            }
            wordstart = i+1;
        }
       
    }
    printf("%s ",newstr);
}
int main()
{
    char str[]="Google NikhilLLLLLLLLLLLL”;
    int n=sizeof(str);
    check(str,n);
    return 0;
}
