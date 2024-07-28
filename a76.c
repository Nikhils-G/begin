#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sorting(int arr[], int n) {
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int ispresent(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return 1;
        }
    }
    return 0;
}

void removeDuplicates(int arr[], int n) {
    int temp[n];
    int k = 0;
    
    for (int i = 0; i < n; i++) {
        if (!ispresent(temp, k, arr[i])) {
            temp[k++] = arr[i];
        }
    }
    
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {23, 44, 5, 12, 12, 12, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    sorting(arr, n);
    removeDuplicates(arr,n);
    display(arr, n);

    return 0;
}
