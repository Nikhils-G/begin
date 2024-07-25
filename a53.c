#include <stdio.h>

#define EPSILON 1e-6  // Small tolerance for floating-point comparison

// Function to check if three points are collinear
int areCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    // Calculate the area of the triangle formed by these points
    // If area is 0, the points are collinear
    int area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    return (area == 0);
}

// Function to get the equation of the line given three collinear points
void getLineEquation(int x1, int y1, int x2, int y2, int x3, int y3) {
    if (areCollinear(x1, y1, x2, y2, x3, y3)) {
        int a, b, c;
        
        // Using the first two points (x1, y1) and (x2, y2) to get the equation
        a = y2 - y1;   // Coefficient of x
        b = x2 - x1;   // Coefficient of y
        c = a * x1 + b * y1;  // Constant term
        
        // To form the equation ax + by = c, we want the equation to be in the form
        // ax + by = c, so output is: a x - b y = c
        if (b < 0) {
            printf("%dx - %dy = %d\n", a, -b, c);
        } else {
            printf("%dx + %dy = %d\n", a, b, c);
        }
    } else {
        printf("0\n");
    }
}

int main() {
    int n, x1, y1, x2, y2, x3, y3;
    
    // Input number of points
    printf("Enter the number of points: ");
    scanf("%d", &n);
    
    if (n != 3) {
        printf("This program only handles exactly 3 points.\n");
        return 1;
    }
    
    // Input the coordinates of the points
    printf("Enter the coordinates of the points:\n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    
    // Get the equation of the line or print 0 if points are not collinear
    getLineEquation(x1, y1, x2, y2, x3, y3);
    
    return 0;
}
