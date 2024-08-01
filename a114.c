#include <stdio.h>

void check(int arr[], int n) {
    int pos[n], neg[n];
    int pos_index = 0, neg_index = 0;

    // Separate positive and negative numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            pos[pos_index++] = arr[i];
        } else if (arr[i] < 0) {
            neg[neg_index++] = arr[i];
        }
    }

    // Interleave positive and negative numbers
    int i = 0, j = 0, k = 0;
    while (i < pos_index && j < neg_index) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // If there are remaining positive numbers
    while (i < pos_index) {
        arr[k++] = pos[i++];
    }

    // If there are remaining negative numbers
    while (j < neg_index) {
        arr[k++] = neg[j++];
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, -4, -5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    check(arr1, n1);

    int arr2[] = {1, 2, -3, -1, -2, -3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    check(arr2, n2);

    return 0;
}
