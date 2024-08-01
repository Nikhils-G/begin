#include<stdio.h>
int co(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            if(sum == k)
            {
                count++;
            }
        }
    }
    return count;
}
void main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int a=co(arr,n,3);
    printf("%d",a);
}
