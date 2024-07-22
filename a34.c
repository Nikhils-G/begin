#include <stdio.h>

int chocolate_distribution_ways(int n) {
    int count = 0;

    for (int a = 2; a < n; a++) {
        int b = n - a;
        if (a > b && b >= 1) {
            count++;
        }
    }

    return count;
}

int main() {
    int n1 = 4;
    int n2 = 12;
    printf("chocolate_distribution_ways(%d) = %d\n", n1, chocolate_distribution_ways(n1)); // Should return 1
    printf("chocolate_distribution_ways(%d) = %d\n", n2, chocolate_distribution_ways(n2)); // Should return 5
    return 0;
}
