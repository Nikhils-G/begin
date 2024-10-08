#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of farmers: ");
    scanf("%d", &n);

    int totalLands = 0;
    int previousLand = 0;

    for (int i = 1; i <= n; i++) {
        int currentLand = previousLand ^ i;
        totalLands += currentLand;
        previousLand = currentLand;
    }

    printf("Total number of lands owned by %d farmers: %d\n", n, totalLands);

    return 0;
}
