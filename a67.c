#include <stdio.h>
#include <math.h>

int main(){
    
    int n=7, x=2;
    
    //Variable of count required numbers
    int count = 0;
    
    for(int i=1; i<=n; i++){
        
        //variable to count the factors of i-th number
        int count_factors = 0;
        for(int j = 1; j<= i; j++){
            if(i%j==0){
                    count_factors++;
            }
        }
        
        if(count_factors == x)
            count++;
    }
    
    printf("%d ", count);
}
