#include <stdio.h>
#include <stdbool.h>

int sum_of_squares_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool is_happy_number(int n) {
    int slow = n;
    int fast = n;

    do {
        slow = sum_of_squares_of_digits(slow); // move slow one step
        fast = sum_of_squares_of_digits(sum_of_squares_of_digits(fast)); // move fast two steps

        if (fast == 1) {
            return true; // If fast reaches 1, then the number is happy
        }
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int n = 19; // Example input
    if (is_happy_number(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
