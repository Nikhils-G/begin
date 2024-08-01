#include<stdio.h>
 
int linearseach(int arr[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            return 1;
        }
    }
    return 0;
}
int check(int arr[],int n)
{
    int max;
    for(int i=0;i<n;i++)
    {
        int count=1;
        int a=arr[i];
        while(linearseach(arr,n,a+1)==1)
        {
            a += 1;
            count += 1;
        }
        if(count > max)
        {
            max=count;
        }
    }
    return max;
}
int main()
{
    int arr[]={3, 8, 5, 7, 6};
    int n=sizeof(arr)/sizeof(arr[0]);\
    int a=check(arr,n);
    printf("%d",a);
    return 0;
}


