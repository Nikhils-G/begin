#include <stdio.h>

int sep(int arr[], int arr2[], int n, int m)
{
    if (n > m)
    {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == arr2[j])
            {
                count++;
            }
        }
        if (count > 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 2};
    int arr2[] = {4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]); // Corrected the size calculation for arr2

    if (sep(arr, arr2, n, m))
    {
        printf("yes!!");
    }
    else
    {
        printf("no");
    }

   
}
