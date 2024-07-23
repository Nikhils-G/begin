// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    char str[]={"aabbbbeeeeffggg"};
    int count =0;
    char str1[100];
    int k=0;
    for(int i=0;str[i] != '\0'; i++)
    {
        count =0;
        for(int j = 0;j<= i;j ++)
        {
            if(str[i] == str[j])
            {
                count ++;
            }
        }
        if(count == 1)
        {
                str1[k]=str[i];
                k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        count=0;
        for(int j=0; str[j] != '\0';j++)
        {
            if(str1[i] == str[j])
            {
                count ++;
            }
        }
        if(count == 1)
        {
                printf("%c",str1[i]);
        }
        else
        {
            printf("%c%d",str1[i] , count);
        }
        
    }
    return 0;
}
