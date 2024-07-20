// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
int nikhil(int arr[],int n,int num,int diff)
{
    if(n==0)
    {
        return 0;
    }
    
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        int as=arr[i]-num;
        if(abs(as)<=diff)
        {
            count++;
        }
    }
    return count;
    
}
int main() 
{
    int arr[]={12, 3 ,14, 56 ,77 ,13};
    int n=sizeof(arr)/sizeof(int);
    int num=13, diff=2;
    int cot=nikhil(arr,n,num,diff);
    printf("%d",cot);
    return 0;
}
