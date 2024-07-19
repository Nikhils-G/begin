#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Nikhil";
    char str2[] = "Nikhil";
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int temp;

    // Check if lengths are different
    if (n1 != n2)
    {
        printf("NOT ANAGRAM\n");
        return 0;
    }

    // Sort both strings
    for (int i = 0; i < n1 - 1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {
            if (str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if (str2[i] > str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // Compare sorted strings
    for (int i = 0; i < n1; i++)
    {
        if (str1[i] != str2[i])
        {
            printf("NOT ANAGRAM\n");
            return 0;
        }
    }

    printf("ANAGRAM\n");
    return 0;
}
