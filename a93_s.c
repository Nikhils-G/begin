#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int n = strlen(str);
    int index = 0;  // Index to keep track of the position in the new string

    // Iterate through the string
    for (int i = 0; i < n; i++) {
        int j;
        // Check if str[i] is already in the result
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;  // Duplicate found, break the inner loop
            }
        }
        // If str[i] is not a duplicate, add it to the result
        if (j == i) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';  // Null-terminate the result string
}

int main() {
    char str[] = "cbacdcbc";
    printf("Original string: %s\n", str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}
