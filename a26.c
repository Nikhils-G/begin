
################## EASY EASY EASY EASY EASY EASY EASY WORK ON IT WORK ON IT WORK IN IT #########################################

#include<stdio.h>
int number(int num1,int num2)

{
    int sum=0,count =0 ;
    int carry=0;
    while((num1>0)&&(num2>0))
    {
        sum =(num1%10)+num2%10+carry;
        if(sum>9)
        {
            carry=1;
            count++;
        }
        else
        {
            carry=0;
        }
        num1 = num1/10;
        num2 = num2/10;
        
    }
    return count ++;
}
int main()
{
    int num1=541,num2=359;
    int a=number(num1,num2);
    printf("%d",a);
    return 0;
}





