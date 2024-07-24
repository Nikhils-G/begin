#include <stdio.h>
#include <limits.h>

int sec(int arr[], int n)
{
    if (n < 2) {
        printf("Array does not have enough elements.\n");
        return -1; // Error code indicating insufficient elements
    }

    int max = INT_MAX;
    int max2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            max2 = max; // Update second largest
            max = arr[i]; // Update largest
        }
        else if (arr[i] < max2 && arr[i] != max)
        {
            max2 = arr[i]; // Update second largest if it's not equal to the largest
        }
    }

    // Check if second largest was updated
    if (max2 == INT_MIN) {
        printf("No second largest element found.\n");
        return -1; // Error code indicating no second largest element
    }

    return max2;
}

int main()
{
    int arr[] = {1, 22, 3, 3, 3, 3, 3, 4, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // Correct calculation of array size

    int max2 = sec(arr, n);
    if (max2 != -1) // Only print if a valid second largest element was found
    {
        printf("Second largest element is %d\n", max2);
    }
    return 0;
}
