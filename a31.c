#include <stdio.h>

void next(int arr[], int n) {
    if (arr == NULL) {
        return;
    }

    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                next = arr[j];
                break;
            }
        }
        arr[i] = next;
    }
}

int main() {
    int arr[] = {3, 2, 11, 7, 6, 5, 6, 1};
    int n = sizeof(arr) / sizeof(int);
    next(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
