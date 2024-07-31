#include<stdio.h>
#include<string.h>
#include<ctype.h>
void checking_word_mostnumber_of_repeats(char str[],int n)
{
    int mostrepeats=0;
    char result[100];
    char *token;
    
    token=strtok(str," ");
    while(token != NULL)
    
    {
        int maxfreq=0;
        
        int freq[256] = {0};
        int t_length=strlen(token);
        for(int i=0;i<=t_length;i++)
        {
            if(isalpha(token[i]))
            {
                freq[token[i]]++;
                if(freq[token[i]] > maxfreq)
                {
                    maxfreq=freq[token[i]];
                }
            }
        }
        if(maxfreq>mostrepeats)
        {
            mostrepeats=maxfreq;
            strcpy(result,token);
        }
        token=strtok(NULL," ");
    }
    if(mostrepeats <= 1)
    {
        printf("-1");
    }
    else
    {
        printf("%s",result);
    }
}
int main()
{
    char str[]="abcdefghij google microsoft";
    int n=strlen(str);
    checking_word_mostnumber_of_repeats(str,n);
    return 0;
}
