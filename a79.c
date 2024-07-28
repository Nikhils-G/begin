#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void sort(int arr[],int n)
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
        swap(&arr[min],&arr[i]);
    }
}

int main() 
{
    int arr[] = {3, 30, 34, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // Correctly calculate the number of elements in arr
    int arr1[100];
    int p=0;
    for(int i=0;i<n;i++)
    {
        
        int num=arr[i];
        while(num !=0)
        {
            int rem=num % 10;
            arr1[p]=rem;
            p++;
            num = num /10;
        }
    }

    // Print the digits extracted
    
    sort(arr1,p);
    for (int i=p-1; i>=0; i--) {
        printf("%d", arr1[i]);
    }
    
    return 0;
}
