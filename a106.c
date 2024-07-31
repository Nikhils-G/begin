#include<stdio.h>
int check(int arr[],int n)
{
    int count=0;
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count ++;
        }
        else
        {
            if(count>maxcount)
            {
                maxcount=count;
            }
            count=0;
        }
        
    }
    if(count > maxcount)
    {
        maxcount=count;
    }
    return maxcount;
}
int main()
{
    int arr[]={1, 1, 0, 1, 1, 1};
    int k =sizeof(arr)/sizeof(arr[0]);
    int as=check(arr,k);
    printf("%d",as);
    return 0;
    
}
