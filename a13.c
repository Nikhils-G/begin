#include<stdio.h>
void div90(int arr[],int n)
{
    int count0=0;
    int count5=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==5)
        {
            count5++;
        }
        else if(arr[i]==0)
        {
            count0++;
        }
    }
    if(count0 == 0)
    {
        printf("0");
        return;
    }
    int term=(count5/9)*9;
    
    if(term==0)
    {
        printf("0");
        return;
    }
    for(int i=0;i<term;i++)
    {
        printf("5");
    }
    for(int i=0; i<count0 ;i++)
    {
        printf("0");
    }
   printf("\n");
}

int main()
{
    int arr[]={5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5};
    int n=sizeof(arr)/sizeof(int);
    div90(arr,n);
    return 0;
}
