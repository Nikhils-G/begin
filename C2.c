#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Move#Hash#to#Front";
    int n = strlen(str);
    
    char str1[190]; // To store '#' characters
    int k = 0; // Index for str1
    
    char str2[190]; // To store alphabetic characters
    int p = 0; // Index for str2
    
    // Loop to separate '#' characters and alphabetic characters
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '#')
        {
            str1[k] = str[i];
            k++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str2[p] = str[i];
            p++;
        }
    }
    
    // Null-terminate the strings
    str1[k] = '\0';
    str2[p] = '\0';
    
    // Print the result
    printf("%s%s", str1, str2);
    
    return 0;
}
