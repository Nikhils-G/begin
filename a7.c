#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    if (n < 3 || n > 10000) {
        printf("Invalid array size. Size must be between 3 and 10000.\n");
        return 1;
    }
    
    int arr[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 1 || arr[i] > 10000) {
            printf("Invalid array element. Elements must be between 1 and 10000.\n");
            return 1;
        }
    }
    
    // Sort the array
    qsort(arr, n, sizeof(int), compare);
    
    // Calculate the penalty
    int penalty = 0;
    for (int i = 1; i < n; i++) {
        penalty += abs(arr[i] - arr[i - 1]);
    }
    
    // Output the minimum penalty
    printf("Minimum penalty: %d\n", penalty);
    
    return 0;
}
