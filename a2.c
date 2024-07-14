#include <stdio.h>
#include<limits.h>
int sumof(int arr[],int n)
{
    int sum=0,sum2=0;
    int max=INT_MIN,max2=INT_MIN ,min=INT_MAX,min2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]>max)
            {
                max2=max;
                max=arr[i];
            }
            else
            {
                if(arr[i]>max2)
                {
                    max2=arr[i];
                }
            }
        }
        else
        {
            if(arr[i]<min)
            {
                min2=min;
                min=arr[i];
            }
            else
            {
                if(arr[i]<min2)
                {
                    min2=arr[i];
                }
            }
        }
        
    }
    return min2+max2;
}
int main()
{
    int arr[]={1,8,0,2,3,5,6};
    int n=sizeof(arr)/sizeof(int);
    int as=sumof(arr,n);
    printf("%d",as);
    return 0;
}
