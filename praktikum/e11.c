#include <stdio.h>
#define X(N, A, B) ((N % A) - B)
#define Y(N, B, C) ((N / C) - B)
int main() {
    int N, A, B, C, X, Y;

    scanf("%d %d %d %d", &N, &A, &B, &C);

    X = X(N, A, B);
    Y = Y(N, B, C);

    if (X > 0 && Y > 0) {
        printf("Poppi di Hutan");
    } else if (X < 0 && Y > 0) {
        printf("Poppi di Sungai");
    } else if (X < 0 && Y < 0) {
        printf("Poppi di Tambang");
    } else if (X > 0 && Y < 0) {
        printf("Poppi di Kebun Sawit");
    } else if (X == 0 && Y == 0) {
        printf("bersama Masterpon");
    } else if (X == 0 || Y == 0) {
        printf("Perbatasan");
    }
}
