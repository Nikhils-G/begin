#include<stdio.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void sort(int arr[],int n)
{
    int min,temp;
    int i,j;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
            
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
int diff(int arr[],int n,int m)
{
    int diff;
    diff=arr[n-1]-arr[0];
    for(int i=0;i<n-m;i++)
    {
        int os=arr[i+m-1]-arr[i];
        if(diff<os)
        {
            return diff;
        }
    }
    
}
int main()
{
    int arr[]={7,3,2,4,9,12,56};
    int n=sizeof(arr)/sizeof(int);
    int m=5;
    display(arr,n);
    sort(arr,n);
    printf("\n");
    display(arr,n);
     printf("\n");
    int as=diff(arr,n,m);
    printf("%d",as);
    return 0;
}
