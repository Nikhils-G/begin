#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int findSum(char *str) {
    char tempSum[100] = "0"; // Large enough buffer to store digits as a string
    int sum = 0;
    int tempIndex = 0;

    for (int i = 0; i < strlen(str); i++) {
        char s = str[i];

        if (isdigit(s)) {
            tempSum[tempIndex++] = s;
            tempSum[tempIndex] = '\0'; // Null-terminate the string
        } else {
            sum += atoi(tempSum);
            tempSum[0] = '0';
            tempSum[1] = '\0';
            tempIndex = 1;
        }
    }

    sum += atoi(tempSum);
    return sum;
}

int main() {
    char str1[] = "123xyz";
    char str2[] = "1xyz23";

    printf("Input: string = \"%s\"\n", str1);
    printf("Output: %d\n", findSum(str1));

    printf("Input: string = \"%s\"\n", str2);
    printf("Output: %d\n", findSum(str2));

    return 0;
}




#include<stdio.h>  
int main()
{
    //Initializing variables.
    char str[100] = "4PREP2INSTA6";
    int i,sum = 0;
    
    //Iterating each character through for loop.
    for (i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))  //Checking for numeric characters.
        {
            
            sum += (str[i] - '0'); //Adding numeric characters.

        }
    }
    //Printing result.
    printf("Sum of all digits:\n%d", sum);
    return 0; 
}















