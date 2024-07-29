#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sorted(int arr[], int n) {
    int min;
    for (int i = 0; i < n - 1; i++) { // loop through the array
        min = i;
        for (int j = i + 1; j < n; j++) { // correctly increment j
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}
int rankdetermine(int arr[],int n)
{
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    sorted(arr1,n);
    for(int i=0;i<n;i++)
    {
        int rank=1;
        for(int j=0;i<n;j++)
        {
            if(arr[i]==arr1[j])
            {
                arr[i]=rank;
                break;
            }
            if(arr1[j] !=arr1[j-1])
            {
                rank++;
            }
        }
        
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Print a newline after the list
}

int main() {
    int arr[] = {8,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    rankdetermine(arr,n);
    display(arr, n);
    
    return 0;
}
