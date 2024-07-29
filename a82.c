#include <stdio.h>

int FindNumberOfSuperiorElements(int* arr, int n) {
    if (n == 0) {
        return 0; // No elements in the array
    }

    int count = 1; // The rightmost element is always a superior element
    int max = arr[n-1]; // Start with the rightmost element as the maximum

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max) {
            count++;
            max = arr[i];
        }
    }

    return count;
}

int main() {
    int arr[] = {10, 4, 6, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = FindNumberOfSuperiorElements(arr, n);
    printf("Number of superior elements: %d\n", result);
    return 0;
}
