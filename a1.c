#include <stdio.h>
int dif(int n,int m)
{
    int sum =0,sum2=0;
    for(int i=0;i<=m;i++)
    {
        if(i%n==0)
        {
            sum += i;
        }
        else{
            sum2 += i;
        }
    }
    return sum2-sum;
}
int main()
{
    int n,m,i;
    int arr[100];
    printf("");
    scanf("%d",&n);
    printf("");
    scanf("%d",&m);
    int you=dif(n,m);
    printf("%d",you);
    

    return 0;
}
