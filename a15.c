#include<stdio.h>
#include<math.h>
void main()
{
    int n=20;
    int sum =0;
    for(int i=1;i<=n;i++)
    {
        if(i % 1==0 && i % 2 == 0 && i % 4 == 0 && i % 8 == 0)
            sum ++;
    }
    printf("%d ",sum);
    
}
