#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (low < high) {
        if (str[low] != str[high]) {
            return 0; // not a palindrome.
        }
        low++; // move the low index forward
        high--; // move the high index backwards
    }
    return 1; // is a palindrome
}

int main() {
    char str[] = "abbba";
    char str1[] = "abcdedw";
    
    if(isPalindrome(str1))
    {
        printf("True");
    }
    else
        printf("False");
    
    return 0;
}
