#include<stdio.h>
#include<string.h>
void longpali(char str[],int n)
{
    int start=0;
    int left,right;
    int maxlength=1;
    for(int i=0;i<n;i++)
    {
        left =i;
        right =i;
        while(left >=0&&str[left]==str[right]&& right<n)
        {
            if(right-left + 1 > maxlength)
            {
                maxlength = right - left +1 ;
                start = left ;
            }
            left --;
            right ++;
        }
        left =i;
        right =i+1;
        while(left >=0&&str[left]==str[right]&& right<n)
        {
            if(right -left+1 > maxlength)
            {
                maxlength = right - left +1;
                start = left ;
            }
            left --;
            right ++;
        }
    }
    for(int i=start ;i<start +maxlength ;i++)
    {
        putchar(str[i]);
    }
}
int main()
{
    char str[]="abababLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLaaaaaaaa";
    int n= strlen(str);
    longpali(str,n);
    return 0;
}
