#include<stdio.h>
    
//function for factorial
int factorial(int num)
{
    int fact=1;
    for(int i=num; i>=1 ;i--)
        fact*=i;
    return fact;
}
    
//main program
int main()
{
    int n,r;
    printf("Enter number of people: ");
        
    //user input
    scanf("%d",&n);
    printf("Enter number of seats: ");
        
    //user input
    scanf("%d", &r);
        
    //finding all possible arrangements of n people on r seats
    // by using formula of permutation
    int p = factorial(r)/factorial(r-n);

    //printing output
    printf("Total possible arrangements: %d",p);

    return 0;
}
