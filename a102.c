#include<stdio.h>
int index11(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[j] != arr[i])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}
int main()
{
    int arr[]={1,2,2,2,2,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    n=index11(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
