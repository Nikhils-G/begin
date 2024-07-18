#include<stdio.h>
int equi(int arr[],int n)
{
    int total=0;
    int left=0;
    for(int i=0;i<n;i++)
    {
        total += arr[i];
    }
    for(int i=0;i<n;i++)
    {
        total -= arr[i];
        
        if(left==total)
        {
            return i+1;
        }
        left += arr[i];
        
    }
    return -1;
    
}
int main()
{
    int arr[100]={-7, 2, 4,9, -8, 1, 6};
    int n=sizeof(arr)/sizeof(int);
    int as=equi(arr,n);
   
    
    if(as !=-1)
    {
        printf("%d",as);
    }
    else
    {
        printf("not found");
    }
    
    return 0;
    
    
    
}
