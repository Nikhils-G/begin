#include<stdio.h>
#include <string.h>
void check(char str1[],char str2[],int n,int m)
{
  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(str1[i]==str2[j])
            {
              
                printf("%c",str2[j]);
            }
        }
    }
}
int main()
{
    char str[]= "abcdef”;
    char str2[]="cefz";
    int n=strlen(str);
    int m=strlen(str2);
    check(str,str2,n,m);
    return 0;
    
}
