#include<stdio.h>
#include<stdlib.h>
int findcount(int arr[],int n,int num,int diff)
{
    int count =0;
    int i;
    // int as=num-arr[i];
    if(n<=0)
    {
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        if(abs(num-arr[i]) <= diff)
        {
            count++;
        }
    }
     return count ;
 
}
int main()
{
    int arr[100],num,diff;
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the elements=");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    printf("num:");
    scanf("%d",&num:);
    printf("diff");
    scanf("%d",&diff);
    
    int asss=findcount(arr,n,num,diff);
    printf("%d",asss);
    return 0;
    
}
