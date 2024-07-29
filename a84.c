#include<stdio.h>
#include<limits.h>

int compare(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int maxsubproduct=1;
        for(int j=i;j<n;j++)
        {
            maxsubproduct *= arr[j];
        }
        if(maxsubproduct > max)
        {
           max=maxsubproduct;
        }
    }
    return max;
}
int main()
{
    int arr[]={1,2,-3,0,-4,-5};
    int n=sizeof(arr)/sizeof(n);
    int max11=compare(arr,n);
    printf("%d",max11);
    return 0;
}
