#include <stdio.h>
#include <math.h>

int main() {
    int n, arr[100];
    int sum = 0;
    printf("N=");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j])
                break;
        }
        if (j == n)
            sum = sum + arr[i];
    }

    printf("%d", sum);
    return 0;
}
