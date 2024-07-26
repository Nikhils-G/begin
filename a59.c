#include<stdio.h>

int main()
{
    int num1 = 36, num2 = 60;
    int hcf=1;
    for(int i=1;i<=num1 || i <=num2 ; i++)
    {
        if(num1 % i==0 && num2 % i ==0)
        {
            hcf=i;
        }
    }
    int lcm;
    lcm = (num1 * num2)/hcf;
    
    printf("The HCF: %d", hcf);
    printf("\n");
    printf("The LCM: %d", lcm);
    
    return 0;
}
// Time complexity : O(N)
// Space complexity : O(1)
