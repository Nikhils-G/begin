#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

// Function to find the maximum occurring character
char getMaxOccurringChar(char* str) {
    int count[ASCII_SIZE] = {0};  // Create an array to keep the count of each character
    int max = -1;                 // Initialize max count
    char result;                  // Store result character
    
    // Iterate through the given string
    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;  // Update the count array
    }
    
    // Find the maximum occurring character
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (max < count[i]) {
            max = count[i];
            result = (char)i;
        }
    }
    
    return result;
}

int main() {
    char str[] = "takeuforward";
    char maxChar = getMaxOccurringChar(str);
    printf("Maximum occurring character is '%c'\n", maxChar);
    return 0;
}
