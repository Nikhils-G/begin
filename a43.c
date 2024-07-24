// Online C compiler to run C program online
#include <stdio.h>
void swap(int *xp ,int *yp)
{
    int temp=*xp;
    *xp = *yp;
    *yp=temp;    
}
void sorted(int arr[],int n)
{
    int min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(&arr[min] , &arr[i]);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}
int main() 
{
    int arr[]={12,323,5,1,6};
    int n = sizeof(arr)/sizeof(n);
    int arr1[]={1,21,42,2,3,4};
    int m = sizeof(arr1)/sizeof(m);
    int new1[199];
    int p;
    for(int i=0;i<n;i++)
    {
        new1[p]=arr[i];
        p++;
    }
    for(int i=0;i<m;i++)
    {
        new1[p]=arr1[i];
        p++;
    }
    
    sorted(new1,p);
    display(new1,p);
    return 0;
}
