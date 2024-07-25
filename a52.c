// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void freq(char *str,int *freq)
{
    for(int i=0;str[i] != '\0';i++)
    {
        freq[(int)str[i]]++;
    }
}
int anagram(char str1[],char str2[])
{
    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }
    int freq1[256]={0};
    int freq2[256]={0};
    freq(str1,freq1);
    freq(str2,freq2);
    
    for(int i=0;i<256;i++)
    {
        if(freq1 != freq2)
        {
            return 1;
        }
    }
    return 0;
}
void main()
{
    char str1[]="triangle";
    char str2[]="integral";
    if(anagram(str1,str2))
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}
