#include<stdio.h>
#include<string.h>
int counting_of_palindromes(char str[], int n)
{
    int start=0;
    int left;
    int right;
    int count =0;
    for(int i=0;i<n;i++)
    {
        left=i;
        right=i;
        while(left>=0&&str[left]==str[right]&&right<n)
        {
            count++;
            left--;
            right++;
        }
        left=i;
        right=i+1;
        while(left>=0&&str[left]==str[right]&&right<n)
        {
            count++;
            left--;
            right++;
        }
    }
    return count;
}

int main()
{
    char str[]="bwjekbfwefiow";
    int n=strlen(str);
    int count=counting_of_palindromes(str,n);
    printf("%d ",count);
    return 0;
}
