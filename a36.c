#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Nikhil";
    int n = strlen(str);

    char temp[100];
    
    // Create the reversed string
    for (int i = 0; i < n; i++) {
        temp[i] = str[n - i - 1];
    }
    temp[n] = '\0'; // Null-terminate the reversed string

    // Compare the original string and the reversed string
    if (strcmp(str, temp) == 0) {
        printf("palindrome\n");
    } else {
        printf("no\n");
    }

    return 0;
}
