DO IT !!! 

#include <stdio.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
int sort(int arr[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
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
void display(int arr[],int n11)
{
    for(int i=0;i<n11;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr1[]={21,43,2,21};
    int arr2[]={22,3,12,44,55};
    int n1=sizeof(arr1)/sizeof(int);
    int m=sizeof(arr2)/sizeof(int);
    int sum;
    sort(arr1, n1);
    sort(arr2, m);
    if(arr1[n1-1]>arr2[m-1])
    {
        sum = arr1[n1-1]-arr2[0];
    }
    else
    {
        sum =  arr2[m-1]-arr1[0];
    }
    printf("%d",sum);
    
    return 0;
    
    
    
}
