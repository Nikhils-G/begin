#include <stdio.h>
#include <math.h>

int main() 
{
    double a, b, c, dis, root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);
    dis = b * b - 4 * a * c;
    
    if (dis > 0)
    {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("%lf %lf\n", root1, root2);
    }
    else if (dis == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("%lf\n", root1);
    }
    else
    {
        root1 = -b / (2 * a);
        root2 = sqrt(-dis) / (2 * a);
        printf("%lf + %lfi\n", root1, root2);  // Real and imaginary parts
        printf("%lf - %lfi\n", root1, root2);  // Real and imaginary parts
    }
    return 0;
}
