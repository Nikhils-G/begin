#include<stdio.h>
void swap(int *xp,int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void  sort(int arr[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
    }
}
 void display(int  arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
 }
 
int main()
{
    int n;
    printf("N=");
    scanf("%d",&n);
    int array[n], even[n], odd[n];
    int evenCount = 0, oddCount = 0;
    printf("ARRAY=");
    for(int i=0;i<n;i++)
    {
        printf("Enter element at %d index: ", i);
        scanf("%d", &array[i]);
        if (i % 2 == 0) {
            even[evenCount++] = array[i];
        } else {
            odd[oddCount++] = array[i];
        }
    }
    sort(even,evenCount);
    sort(odd,oddCount);
    display(even,evenCount);
    printf("\n");
    display(odd,oddCount);
}
