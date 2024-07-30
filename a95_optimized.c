#include <stdio.h>
#include <string.h>

void findLargestWord(char str[]) {
    int maxlength = 0;   // Length of the largest word found
    int currentlength = 0; // Length of the current word
    int wordstart = 0;   // Start index of the current word
    int largeststart = 0; // Start index of the largest word found
    int n = strlen(str);

    for(int i=0;i<=n;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            currentlength=i-wordstart;
            if(currentlength>maxlength)
            {
                maxlength=currentlength;
                largeststart=wordstart;
            }
            wordstart=i+1;
        }
    }
    for(int j=largeststart;j<largeststart+maxlength;j++)
    {
        putchar(str[j]);
    }
    printf('\n');
}

int main() {
    char str1[] = "Google Doc";
    printf("Input: %s\n", str1);
    findLargestWord(str1);

    char str2[] = "Microsoft Teams";
    printf("Input: %s\n", str2);
    findLargestWord(str2);

    return 0;
}
