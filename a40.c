#include <stdio.h>

int operationchoices(int c, int n, int a, int b) {
    int result = 0;

    switch(c) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if (b != 0) {
                result = a / b;
            } else {
                printf("Error: Division by zero\n");
                return -1; // return an error code
            }
            break;
        default:
            printf("Error: Invalid operation\n");
            return -1; // return an error code
    }

    return result;
}

int main() {
    int a = 12;
    int b = 16;
    int c = 1;

    int result = operationchoices(c, 0, a, b); // `n` is not used in the function
    if (result != -1) {
        printf("Result: %d\n", result);
    }

    // Test with another example
    a = 16;
    b = 20;
    c = 2;

    result = operationchoices(c, 0, a, b); // `n` is not used in the function
    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
