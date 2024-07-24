#include <stdio.h>
#include <string.h>
void ChatFrequentcharacter(char str[], char x) {
    int freq[256] = {0}; // Array to store frequency of each character
    int maxFreq = 0; // Maximum frequency
    char maxChar; // Character with maximum frequency
    // Count frequency of each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    // Find the character with maximum frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i < maxChar)) {
            maxFreq = freq[i];
            maxChar = i;
        }
    }
    // Replace the most frequent character with 'x'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == maxChar) {
            str[i] = x;
        }
    }
}
int main() {
    char str[] = "bbadbbababb";
    char x = 't';
    ChatFrequentcharacter(str, x);
    printf("Output: %s\n", str);
    return 0;
}
