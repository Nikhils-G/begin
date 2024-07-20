#include <stdio.h>

int countDiceSums(int target_sum) {
    int count = 0;

    // Iterate through all possible outcomes of the two dice
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i + j == target_sum) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int target_sum;
    printf("Enter the target sum: ");
    scanf("%d", &target_sum);

    int result = countDiceSums(target_sum);
    printf("%d\n", result);

    return 0;
}
