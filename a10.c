#include <stdio.h>
void pairs(int arr[],int n)
{
  int sum=8;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]+arr[j]== sum)
      {
        printf("(%d %d) ",arr[i],arr[j]);
      }
    }
  }
}

int main()
{
  int arr[100]={2,3,4,5};
  
  int n=sizeof(arr)/sizeof(int);
  pairs(arr,n);
  return 0;
  
  
}
