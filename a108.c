#include<stdio.h>
int maxsubarray(int arr[],int n,int p)
{
    int start=0;
    int maxlength=0;
    int sum=0;
    for(int end=0;end<n;end++)
    {
        sum += arr[end];
        while(start<end && sum > p)
        {
            sum -= arr[end];
            start++;
        }
        if(sum == p)
        {
            int length=end-start+1;
            if(maxlength < length)
            {
                maxlength = length;
            }
        }
    }
    return maxlength;
}


int main()
{
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    int as=maxsubarray(arr,n,k);
    printf("%d",as);
}
