// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int arr[]={10,20,30,30,40,40,40};
    int n=sizeof(arr)/sizeof(n);
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d ",count);

    return 0;
}
