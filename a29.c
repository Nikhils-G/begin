#include<string.h>
#include<stdio.h>
void character(char str[],int n,char ch1,char ch2)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(str[i]==ch1)
        {
            str[i]=ch2;
        }
        else if(str[i]==ch2)
        {
            str[i]=ch1;
        }
    }
    printf("%s",str);
}
int main()
{
    char str[90]="Nikhil ";
    int n=strlen(str);
    char ch1='i',ch2='l';
    character(str,n,ch1,ch2);

}
