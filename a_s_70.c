#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hhhbbbbkkkko";
    int n= strlen(str);
    int count = 0 ;
    for(int i=0;i<n;i+=2)
    {
        if(str[i] == str[i+1])
            count ++;
    }
   
    printf("%d ",count);
}
