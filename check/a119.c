#include <stdio.h>
#include <string.h>

#define MAX_LEN 200 // Maximum possible length for the common prefix

// Function to find the longest common prefix
void longestCommonPrefix(char strs[][MAX_LEN], int strsSize, char result[]) {
    if (strsSize == 0) {
        result[0] = '\0';
        return;
    }

    // Start with the first string as the prefix
    int prefixLen = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < prefixLen && strs[i][j] == strs[0][j]) {
            j++;
        }
        // Update the length of the common prefix
        prefixLen = j;
        // If there's no common prefix, break early
        if (prefixLen == 0) {
            break;
        }
    }

    // Copy the common prefix to the result
    strncpy(result, strs[0], prefixLen);
    result[prefixLen] = '\0';
}

int main() {
    // Example 1
    char strs1[][MAX_LEN] = {"flower", "flow", "flight"};
    int strsSize1 = 3;
    char result1[MAX_LEN];
    longestCommonPrefix(strs1, strsSize1, result1);
    printf("Input: [\"flower\",\"flow\",\"flight\"]\nOutput: \"%s\"\n", result1);

    // Example 2
    char strs2[][MAX_LEN] = {"dog", "racecar", "car"};
    int strsSize2 = 3;
    char result2[MAX_LEN];
    longestCommonPrefix(strs2, strsSize2, result2);
    printf("Input: [\"dog\",\"racecar\",\"car\"]\nOutput: \"%s\"\n", result2);

    return 0;
}
