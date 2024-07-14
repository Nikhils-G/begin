#include <stdio.h>
#include <ctype.h>

int CheckPassword(char str[], int n) {
    // Condition 1: At least 4 characters
    if (n < 4) {
        return 0;
    }

    // Initialize flags for the conditions
    int hasDigit = 0;
    int hasCapital = 0;

    // Condition 5: Starting character must not be a number
    if (isdigit(str[0])) {
        return 0;
    }

    // Iterate through the string to check other conditions
    for (int i = 0; i < n; i++) {
        if (isdigit(str[i])) {
            hasDigit = 1;
        }
        if (isupper(str[i])) {
            hasCapital = 1;
        }
        if (str[i] == ' ' || str[i] == '/') {
            return 0;
        }
    }

    // Check if all required conditions are met
    if (hasDigit && hasCapital) {
        return 1;
    }

    return 0;
}

int main() {
    // Test cases
    char password1[] = "aA1_67";
    char password2[] = "a987 abC012";

    printf("Result for '%s': %d\n", password1, CheckPassword(password1, sizeof(password1) - 1)); // Output: 1
    printf("Result for '%s': %d\n", password2, CheckPassword(password2, sizeof(password2) - 1)); // Output: 0

    return 0;
}
