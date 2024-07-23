#include <stdio.h>

int Numberofcarry(int num1, int num2) {
    int carry = 0;
    int count = 0;
    while (num1 > 0 || num2 > 0) 
    {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        if (digit1 + digit2 + carry >= 10) {
            carry = 1;
            count++;
        } else {
            carry = 0;
        }

        num1 /= 10;
        num2 /= 10;
    }

    return count;
}

int main() {
    int num1 = 451;
    int num2 = 349;

    int result = Numberofcarry(num1, num2);
    printf("%d\n", result);

    return 0;
}
