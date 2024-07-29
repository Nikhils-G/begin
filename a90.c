#include <stdio.h>
#include <math.h>

int main()
{
    float a = 3, r = 5, n = 2;
    float s = a * (pow(r, n) - 1) / (r - 1);  // Added parentheses around (r - 1)
    printf("%f", s);
    return 0;
}
