#include <stdio.h>
#include <string.h>

void printDuplicates(char str[]) {
    int count[256] = {0};  // Frequency array to track characters
    int n = strlen(str);
    
    // Count the occurrences of each character in the string
    for (int i = 0; i < n; i++) {
        count[(unsigned char)str[i]]++;
    }
    
    printf("Duplicate characters: ");
    // Print characters that have a count greater than 1
    for (int i = 0; i < n; i++) {
        if (count[(unsigned char)str[i]] > 1) {
            printf("%c ",str[i]);
            count[(unsigned char)str[i]] = 0; // To avoid printing the same character again
        }
    }
    
    printf("\n");
}

int main() {
    char str[] = "aaabbbppole";
    printDuplicates(str);
    return 0;
}
