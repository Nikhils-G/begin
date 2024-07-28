#include <stdio.h>
#include <string.h>

// Arrays to hold word equivalents
char *units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
char *hundred = "hundred";
char *thousand = "thousand";

void numberToWords(int num, char *output) {
    char result[256] = "";

    if (num == 0) 
    {
        strcat(result, "zero");
    }
    else
    {
        if (num / 1000 > 0)
        {
            strcat(result, units[num / 1000]);
            strcat(result, " ");
            strcat(result, thousand);
            strcat(result, " ");
            num %= 1000;
        }
        if (num / 100 > 0)
        {
            strcat(result, units[num / 100]);
            strcat(result, " ");
            strcat(result, hundred);
            strcat(result, " ");
            num %= 100;
        }
        if (num >= 20)
        {
            strcat(result, tens[num / 10]);
            strcat(result, " ");
            num %= 10;
        } 
        else if (num >= 10)
        {
            strcat(result, teens[num - 10]);
            num = 0;
        }
        if (num > 0) 
        {
            strcat(result, units[num]);
        }
    }

    strcpy(output, result);
}

int main() {
    int number;
    char output[256];

    printf("Enter a number (max 4 digits): ");
    scanf("%d", &number);

    // Ensure the number is within the range
    if (number < 0 || number > 9999) {
        printf("Number out of range. Please enter a number between 0 and 9999.\n");
        return 1;
    }

    numberToWords(number, output);
    printf("Output: %s\n", output);

    return 0;
}
