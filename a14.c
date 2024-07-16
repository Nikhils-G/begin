#include <stdio.h>

// Function to check if the number is nearly lucky
void checkLucky(int arr[], int n, int a) {
    int isLucky = 0;
    for(int i = 0; i < n; i++) {
        if(a % arr[i] == 0) {
            isLucky = 1;
            break;
        }
    }
    if (isLucky) {
        printf("%d is NEARLY LUCKY NUMBER\n", a);
    } else {
        printf("%d is NOT LUCKY\n", a);
    }
}

int main() {
    // Array of lucky numbers
    int arr[] = {4, 7, 74, 47, 777, 444, 474, 747, 774, 447, 744, 477};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a = 33;

    // Check if the number is nearly lucky
    checkLucky(arr, n, a);
    
    return 0;
}
