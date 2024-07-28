#include <stdio.h>

// Function to find and print symmetric pairs
void findSymmetricPairs(int arr[][2], int n) {
    // Traverse the array of pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Check if the current pair is symmetric with any other pair
            if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {
                printf("(%d, %d) ", arr[i][0], arr[i][1]);
            }
        }
    }
}

int main() {
    int arr[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSymmetricPairs(arr, n);

    return 0;
}
