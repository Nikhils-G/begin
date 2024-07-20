#include <stdio.h>

int foodForRats(int r, int unit, int n, int arr[]) {
    if (arr == NULL) {
        return -1;
    }
    
    int totalFoodRequired = r * unit;
    int totalFoodAvailable = 0;
    
    for (int i = 0; i < n; i++) {
        totalFoodAvailable += arr[i];
    }
    
    if (totalFoodAvailable < totalFoodRequired) {
        return 0;
    }
    
    int foodAccumulated = 0;
    for (int i = 0; i < n; i++) {
        foodAccumulated += arr[i];
        if (foodAccumulated >= totalFoodRequired) {
            return i + 1;  // i+1 because house numbers start from 1
        }
    }
    return 0;
}

int main()
{
    int r = 7;
    int unit = 2;
    int n = 8;
    int arr[] = {2, 8, 3, 5, 7, 4, 1, 2};
    
    int result = foodForRats(r, unit, n, arr);
    printf("Output: %d\n", result);
    
    return 0;
}
