#       THINK !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!                       #

#include<stdio.h>
int main()
{
    int num =2344;
    int rem,u;
    int  arr[10];
    int i,count=0;
    while (num > 0)
    {
        rem=num%10;
        arr[i]=rem;
        i++;
        count++;
        num=num/10;
    }
    for(int i=0;i<count ;i++)
    {
        printf("%d ",arr[i]);
    }
}
