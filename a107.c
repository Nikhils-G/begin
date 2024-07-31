#include<stdio.h>
#include<limits.h>
#define MAX 1000
int freq(int arr[],int n)
{
    int freq[MAX]={0};
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(freq[arr[i]]==1)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[]={4,4,6,1,2,1,2};
    int n=sizeof(arr)/sizeof(n);
    int frequency=freq(arr,n);
    printf("%d",frequency);
    return 0;
}
