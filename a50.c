#include <stdio.h>

// Function to check if an element is present in an array
int isPresent(int arr[], int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            return 1;
        }
    }
    return 0;
}

// Function to remove duplicates from an array
void removeDuplicates(int arr[], int size) {
    int temp[size];
    int k = 0;

    // Traverse the original array
    for (int i = 0; i < size; i++) {
        // If element is not already in temp array, add it
        if (!isPresent(temp, k, arr[i])) {
            temp[k++] = arr[i];
        }
    }

    // Copy the unique elements back to the original array
    //for (int i = 0; i < k; i++) {
      //  arr[i] = temp[i];
    //}

    // Print the unique elements
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 66666,5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, size);

    return 0;
}
