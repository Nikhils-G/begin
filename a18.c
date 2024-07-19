// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void sorted(int arr[],int n)
{
    int min;
    int i,j;
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
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
   
}
void add(int arr[],int n)
{
    int a=arr[1]+arr[n-2];
    printf("%d",a);
}
int main() {
    int arr[]={9,8,2,1,6};
    int n=sizeof(arr)/sizeof(int);
    
    sorted(arr,n);
    printf("\n");
    display(arr,n);
    printf("\n");
    add(arr,n);
    return 0;
}
