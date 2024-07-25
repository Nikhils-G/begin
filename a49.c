// Online C compiler to run C program online
#include <stdio.h>
int ispresent(int arr[],int n,int element)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            return 1;
        }
    }
    return 0;
} 

int check(int arr1[],int arr2[],int n1,int n2)
{
    int result[n1+n2];
    int k;
    for(int i=0;i<n1;i++)
    {
        result[k]=arr1[i];
        k++;
    }
    for(int i=0;i<n2;i++)
    {
        if(!(ispresent(result,k,arr2[i])))
        {
            result[k]=arr2[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",result[i]);
    }
}

int main() {
    // Write C code here
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={4,522,89,6,7,2,9};
    int n1=sizeof(arr1)/sizeof(n1);
    int n2=sizeof(arr2)/sizeof(n2);
    check(arr1,arr2,n1,n2);


    return 0;
}
