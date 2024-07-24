#include <stdio.h>

void swap(int *xp, int *yp) 
{ 
   int temp = *xp; 
   *xp = *yp; 
   *yp = temp; 
}

void selectionSort(int array[], int size) 
{ 
    int i, j, min_idx;

    // Loop to iterate on array 
    for (i = 0; i < size-1; i++) 
    { 
        // Here we try to find the min element in array 
        min_idx = i; 
        for (j = i+1; j < size; j++)
        {
            if (array[j] < array[min_idx]) 
              min_idx = j; 
        }
        // Here we interchange the min element with first one 
        swap(&array[min_idx], &array[i]); 
     } 
}

/* Display function to print values */
void display(int array[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++)
    { 
       printf("%d ",array[i]);
    }
     printf("\n"); 
}
int findKthLargest(int array[], int size, int k) 
{ 
    //if (k >= size || k < 0) 
    //{
      //  printf("Invalid value of k\n");
        //return -1; // Return an error value
    //}
    /// this will imples the required concept !! /////
    //return array[size-k]; 
}
// The main function to drive other functions 
int main() 
{ 
   int array[] = {50, 30, 10, 90, 80, 20, 40, 70}; 
   int size = sizeof(array)/sizeof(array[0]);
   int k=3;
   selectionSort(array, size);
  
   display(array, size);
   int s=findKthLargest(array,size,k) ;
   printf("%d ",s);
   return 0; 
}
