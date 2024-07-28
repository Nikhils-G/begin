#include<stdio.h>
void merge(int arr1[],int arr2[],int size1,int size2,int result[])
{
    int i=0,j=0,k=0;
    while(i<size1 && j<size2)
    {
        if(arr1[i]<=arr2[j])
        {
            result[k++]=arr1[i++];
        }
        else
        {
            result[k++]=arr2[i++];
        }
    }
    while(i<size1)
    {
        result[k++]=arr1[i++];
    }
    while(j<size2)
    {
        result[k++]=arr2[j++];
    }
}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int n=sizeof(arr1)/sizeof(n);
    int m=sizeof(arr1)/sizeof(m);
    int result[n+m];
    merge(arr1,arr2,n,m,result);
    for (int i = 0; i < n + m; i++)
    
    {
        printf("%d ", result[i]);
    }
}
