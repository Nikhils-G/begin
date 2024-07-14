#include <stdio.h>
int food(int arr[],int n,int r, int u)
{
    int bb;
    int sum=0;
    if(n==0)
    {
        return -1;
    }
    bb=r*u;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum >= bb)
        {
            return i+1;
        }
    }
    
    return 0;
}
int main()
{
    int arr[100],n,r,u;
    printf("r=");
    scanf("%d",&r);
    printf("u=");
    scanf("%d",&u);
    printf("size=");
    scanf("%d",&n);
    printf("enter amount of food of each house=");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    int as=food(arr,n,r,u);
    printf("%d",as);
}
