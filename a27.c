#include <stdio.h>
#include <string.h>

int astro(char *str, int n) {
    if (n == 0) {
        return -1;
    }
    if (n % 2 == 0) {
        return -1;
    }

    int result = str[0] - '0';  // Correct conversion from char to int
    for (int i = 1; i < n; i += 2) {
        int operation = str[i];
        int next = str[i + 1] - '0';  // Correct conversion from char to int
        if (operation == 'A') {
            result &= next;
        } else if (operation == 'B') {
            result |= next;
        } else if (operation == 'C') {
            result ^= next;
        } else {
            return -1;
        }
    }

    return result;
}

int main() {
    char str[100] = "1C0C1C1A0B1";
    int n = strlen(str);
    int result = astro(str, n);
    printf("%d\n", result);
    return 0;
}
