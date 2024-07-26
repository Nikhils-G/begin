#### WORK ON IT ####

#include <stdio.h>
#include <string.h>

void rrr(char *str) {
    int n = strlen(str);
    int wordEnd = n;
    char result[n + 1]; // Corrected to char array
    int re = 0; // Initialize re to 0

    for (int i = n - 1; i >= 0; i--) { // Correct loop condition
        int start;

        if (str[i] == ' ') {
            start = i + 1;
        } else if (i == 0) {
            start = i;
        } else {
            continue;
        }

        int end = wordEnd;

        // Copy the word to result
        for (int j = start; j < end; j++) {
            result[re++] = str[j];
        }

        // Add a space if it's not the last word
        if (i != 0) {
            result[re++] = ' ';
        }

        wordEnd = i;
    }

    result[re] = '\0'; // Null terminate the result string
  
    printf("%s ",result);
     // Copy result back to the original string
}

int main() {
    char str[] = "Nikhil Is Very Good Boy";
    rrr(str);
    // Corrected printf statement
    return 0;
}
