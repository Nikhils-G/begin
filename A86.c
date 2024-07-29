// Online C compiler to run C program online
#include <stdio.h>
int check(int arr[],int n)
{
    int left,right;
    for(int i=0;i<n;i++)
    {
        left=0;
        for(int j=0;j<i;j++)
        {
            left += arr[j];
        }
        right=0;
        for(int j=i+1;j<n;j++)
        {
            right += arr[j];
        }
        if(left==right)
        {
            return i;
        }
    }
    
}
int main() {
    int arr[]= { 2, 3, -1, 8, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int p=check(arr,n);
    printf("%d",p);
    return 0;
}
