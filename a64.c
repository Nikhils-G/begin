#include<stdio.h>

int main()
{
    int x1,y1,x2,y2,c,x,y;
    printf("numerator1=");
    scanf("%d",&x1);
    printf("denominator1=");
    scanf("%d",&y1);
    printf("numerator2=");
    scanf("%d",&x2);
    printf("denominator2=");
    scanf("%d",&y2);
    int gcd;
    x=(x1*y2)+(x2*y1);
    y= y1 * y2 ;
    for(int c=1 ; c<=x && c<=y;c++)
    {
        if(x%c==0 && y%c==0)
        {
            gcd=c;
        }
    }
    printf("%d / %d + %d / %d = %d / %d " ,x1,y1 ,x2,y2,x/gcd,y/gcd);
    return 0;
}
