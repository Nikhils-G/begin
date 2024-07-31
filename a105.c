#include<stdio.h>
int check(int arr[],int n)
{
    int zero[n];
    int her[n];
    int re=0;
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero[re++]=arr[i];
        }
        else
        {
            her[p++]=arr[i];
        }
    }
    for(int i=0;i<re;i++)
    {
        her[p++]=zero[i];
    }
    for(int i=0;i<p;i++)
    {
        printf("%d,",her[i]);
    }
}
int main()
{
    int arr[]={1,2,0,1,23,0,0,0,0,1,0,4,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    check(arr,n);
    return 0;
    
    
}
