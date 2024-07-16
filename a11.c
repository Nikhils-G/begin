#include <stdio.h>

// Function to find the number of bulbs that are on after n rounds
int bulbSwitch(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        count++;
    }
    return count;
}

int main() {
    int n = 25; // Example input
    printf("Number of bulbs that are on after %d rounds: %d\n", n, bulbSwitch(n));
    return 0;
}


// #include <stdio.h>
//#include <math.h>

// Function to find the number of bulbs that are on after n rounds
//int bulbSwitch(int n) {
  //  return (int)sqrt(n);
//}

//int main() {
  //  int n = 25; // Example input
    //printf("Number of bulbs that are on after %d rounds: %d\n", n, bulbSwitch(n));
    //return 0;
//}
