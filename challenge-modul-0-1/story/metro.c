#include <stdio.h>

int main() {
    int L, S, A;

    scanf("%d %d %d", &L, &S, &A);

    switch (L) {
        case 1:
        case 2:
        case 4:
            if (S != 1) break;
            printf("BOARD");
            return 0;
        case 3:
            if (!A) {
                printf("ACCESS DENIED");
                return 0;
            }
            printf("BOARD");
            return 0;
        default:
            printf("INVALID LINE");
            return 0;
    }

    printf((S == 2) ? "TOO LATE" : "WAIT");
}