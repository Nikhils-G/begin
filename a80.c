// Online C compiler to run C program online
#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void sorting(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
    }
}
void sorting2(int arr[],int n)
{
    for(int i=n/2;i<n;i++)
    {
        int min=i;
        for(int j=n/2+1;j<n;j++)
        {
            if(arr[j]>arr[min])
            {
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[]={8, 7 ,1 ,6, 5 ,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorting(arr,n);
    sorting2(arr,n);
    display(arr,n);

    return 0;
}
