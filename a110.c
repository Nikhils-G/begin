// Online C compiler to run C program online
#include <stdio.h>

void s1um(int arr[],int n,int sum)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                printf("%d ,%d ",arr[i],arr[j]);
                
            }
        }
    }

}


int main() 
{
    int arr[] = {2,6,5,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    s1um(arr,n,14);
    return 0;
}
