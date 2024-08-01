#include <stdio.h>
#define n 3

void ro360(int mat[n][n], int rot[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rot[j][n - i - 1] = mat[i][j];
        }
    }
}

void print(int mat[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rotate[n][n];
    ro360(mat, rotate); 
    printf("Rotated Matrix:\n");
    print(rotate); 
    return 0;
}
