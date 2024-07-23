#include<stdio.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void sorted(int arr[],int n)
{
    int min;
    for(int i=0;i<n;i++)
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
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}
int sumof(int arr1[],int arr2[],int n,int m)
{
    int sum;
    return arr1[n-2]+arr2[m-2];
    
}
int main()
{
    int arr[]={3,4,1,7,9};
    int n=sizeof(arr)/sizeof(n);
    sorted(arr,n);
   
    printf("\n");
    int count1=0;
    int even[100];
    int count2=0;
    int odd[100];
    for(int i=0;i<n;i++)
    {
        if(i % 2 == 0)
        {
            even[count1++]=arr[i];
            
        }
        else
        {
            odd[count2++]=arr[i];
            
        }
    }
    for(int i=0;i<count1;i++)
    {
        printf(" %d ",even[i]);
    }
    printf("\n");
    for(int i=0;i<count2;i++)
    {
        printf(" %d ",odd[i]);
    }
    printf("\n");
    int as=sumof(even,odd,count1,count2);
    printf("%d ",as);
    
}
