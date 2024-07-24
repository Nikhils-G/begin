#include <stdio.h>

// Function to swap two elements
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

// Function to perform Bubble Sort in descending order
int bubble(int arr[], int size) 
{ 
    int i, j; 
    int count=0;
    for (i = 0; i < size-1; i++) 
    { 
        for (j = 0; j < size-i-1; j++) 
        { 
            if (arr[j] < arr[j+1]) 
             {
                 swap(&arr[j], &arr[j+1]); 
                 count ++;
             }
        } 
    } 
    return count;
}

// Function to find the kth largest element


// Main function
int main() 
{ 
    int array[] = {74, 85, 102, 99, 101, 56, 84}; 
    int size = sizeof(array)/sizeof(array[0]);
    int k = 2; // Example value of k

    int result = bubble(array, size);
    printf("%d ",result);
    
    

    return 0; 
}
