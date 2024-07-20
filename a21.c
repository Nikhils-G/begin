#include <stdio.h>
#include <string.h>

int expd(char str[100], int n) {
    int num = 0;
    int cap = 0;

    // Check if the length is less than 4
    if (n < 4) {
        return 0;
    }

    // Check if the first character is a number
    if (str[0] >= '0' && str[0] <= '9') {
        return 0;
    }

    // Iterate through the string to check the conditions
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ' || str[i] == '/' || str[i] == '\\') {
            return 0;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            cap = 1;
        } else if (str[i] >= '0' && str[i] <= '9') {
            num = 1;
        }
    }

    // Return 1 if both num and cap are set, otherwise return 0
    return cap && num;
}

int main() {
    char str[100] = "aaA123C_";
    int n = strlen(str);

    int as = expd(str, n);
    printf("%d", as);

    // Test case 2
    char str2[100] = "acd34 4rf";
    n = strlen(str2);

    as = expd(str2, n);
    printf("\n%d", as);

    return 0;
}
