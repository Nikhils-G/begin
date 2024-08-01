#include<stdio.h>
#include<limits.h>
int maxsubarray(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum += arr[k];
            }
            if(sum > max)
            {
                max=sum;
            }
        }
        
    }
    return max;
}
int main()
{
    int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int n1=maxsubarray(arr,n);
    printf("%d",n1);
    
}
