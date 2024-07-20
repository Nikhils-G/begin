#include <stdio.h>
#include <string.h>

void ReplaceCharacter(char str[], int n, char ch1, char ch2)
{
    char temp;
    char as;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == ch1)
        {
            str[i] = ch2;
        }
        else if(str[i] == ch2)
        {
            str[i] = ch1;
        }
    }
    printf("%s", str);
}

int main()
{
    char a[100];
    char b, c;

    // Reading the string first
    scanf("%s", a);

    // Reading single characters
    scanf(" %c", &b);
    scanf(" %c", &c);

    int len = strlen(a);

    ReplaceCharacter(a, len, b, c);
    return 0;
}
