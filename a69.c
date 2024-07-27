#include<stdio.h>
#include <string.h>
int marry(char str[])
{
   int count[26]={0};
   for(int i=0;i<4;i++)
   {
      if(count[str[i]-'a']>0)
      {
         return 0;
      }
      count[str[i]-'a']++;
   }
   return 1;
}
int main()
{
   int n;
   printf("N=");
   scanf("%d",&n);
   
   if(n< 4)
   {
      printf("0");
   }
   int count=0;
   char str[10001];
   printf("str=");
   scanf("%s",str);

   if(n != strlen(str))
   {
      printf("0");
   }
   for(int i=0;i<n;i++)
   {
      if(marry(str+i))
      {
         count ++;
      }
   }
   printf("%d ",count);
   return 0;
}
