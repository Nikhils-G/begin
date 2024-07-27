#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    // Calculate the number of M steps Alice can take
    long long m_steps = N / M;

    // Calculate the remaining steps after taking M steps
    long long remainder = N % M;

    // Total steps is the sum of M steps and the remaining 1 steps
    long long total_steps = m_steps + remainder;

    printf("%lld\n", total_steps);

    return 0;
}
