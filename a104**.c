#include<stdio.h>
int check(int arr[],int n,int k)
{
    int temp[n];
    k = k % n ;
    for(int i=0;i<k;i++)
    {
        temp[i]=arr[n-k+i];
    }
    for(int i=k;i<n;i++)
    {
        temp[i]=arr[i-k];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    check(arr,n,k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
