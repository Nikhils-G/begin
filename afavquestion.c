// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
int check(int arr[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=j;
            }
        }
    }
    int max=INT_MIN;
    for(int k=min;k<n-1;k++)
    {
        for(int j=k+1;j<n;j++)
        {
            if(arr[j]>max)
            {
                max=j;
            }
        }
    }
    return max;
}
int main()
{
    int arr[]={7,1,2,9,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int o=check(arr,n);
    printf("%d",o);

    return 0;
}
