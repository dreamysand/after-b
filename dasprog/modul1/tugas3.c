#include <stdio.h>

int main() {
    long long T, N;

    if (scanf("%lld %lld", &T, &N) != 2) {
        return 0;
    }

    if (T == 1) {
        long long result = N * N;
        printf("%lld\n", result);
    } else if (T == 2) {
        long long result = N * (N + 1);
        printf("%lld\n", result);
    } else if (T == 3) {
        long long result = (N * (N + 1) * (2 * N + 1)) / 6;
        printf("%lld\n", result);
    } else if (T == 4) {
        long long sum = (N * (N + 1)) / 2;
        long long result = sum * sum;
        printf("%lld\n", result);
    } else {
        printf("MODE TIDAK VALID\n");
    }
}