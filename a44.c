#include<stdio.h>
int main()
{
    int arr[]={1,1,6,6,6,6,6,6,6,6,6,2,32,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,23};
    int n=sizeof(arr)/sizeof(int);
    int visited[n];
    int i;
    int max=0,element;
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        int count =1;
        for(int j=1+1;j<i;j++)
        {
            if(arr[j]==arr[i])
            {
                count ++;
                visited[j]=1;
            }
        }
        if(count > max)
        {
            max=count;
            element=arr[i];
        }
    }
    printf("%d ",element);
 
}

