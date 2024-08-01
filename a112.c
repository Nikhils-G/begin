#include<stdio.h>
void frequency(int arr[],int n,int *freq)
{
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
}
void pp(int arr[],int n)
{
    int freq[256]={0};
    frequency(arr,n,freq);
    int f;
    int maxfreq=0;
    
    for(int i=0;i<n;i++)
    {
        if(freq[i]>maxfreq)
        {
            maxfreq=freq[i];
            f=i;
        }
    }
    printf("%d",f);
}
int main()
{
    int arr[]={4,4,2,4,3,4,4,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    pp(arr,n);
    return 0;
}
