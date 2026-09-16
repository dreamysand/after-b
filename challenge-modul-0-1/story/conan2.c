#include <stdio.h>

int main() {
    int X, Y, V, K, T;

    scanf("%d %d %d %d %d", &X, &Y, &V, &K, &T);

    if (K > T) return 0;

    if (
        ((X + Y) < (V * T)) ||
        ((X + Y) < (2 * V * K)) ||
        ((X + Y) > (2 * V * K)) && ((T - K) > 0) && (((X + Y) - (2 * V * K)) < (V * (T - K)))
    ) {
        printf("KEJAR!");
        return 0;
    }

    printf("KABUR!");
}