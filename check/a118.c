#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeOuterParentheses(char* s) {
    int length = strlen(s);
    char result[length];
    int balance = 0;
    int index = 0;

    for (int i = 0; i < length; i++) {
        if (s[i] == '(') {
            if (balance > 0) {
                result[index++] = s[i];
            }
            balance++;
        } else {
            balance--;
            if (balance > 0) {
                result[index++] = s[i];
            }
        }
    }
    
    result[index] = '\0'; // Null-terminate the result string
    printf("%s",result);
}

int main() {
    char s1[] = "(()())(())";
    char s2[] = "(()())(())(()(()))";
    char s3[] = "()()";
    
    removeOuterParentheses(s2);
    
    return 0;
}
