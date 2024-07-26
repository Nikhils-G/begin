#include<stdio.h>

int main() 
{
    int  base = 2000;
    // exp has to be positive and int value for this method
    int exp = 299;
    double long result = 1.0;
    
    while (exp != 0) {
        result *= base;
        --exp;
    }
    
    printf("Answer = %Lf", result);
    
    return 0;
}
