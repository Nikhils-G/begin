// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int num1=2399993;
    int arr[100];
    int largest=-1;
    int smallest=10;
    while(num1 != 0)
    {
        int rem=num1%10;
        if(rem < smallest)
        {
            smallest=rem;
        }
        else if(rem >largest )
        {
            largest =rem;
        }
        num1 =num1/10;
    }
    printf("%d ",largest );
    printf("\n");
    printf("%d ",smallest);
    
    return 0;
}
