#include <stdio.h>
#define IS_LEAP_YEAR(y) ((y % 400) == 0) || ((y % 4) == 0) && ((y % 100) > 0)

int main() {
    int D, M, Y;

    scanf("%d %d %d", &D, &M, &Y);

    if (M <= 0 || M > 12) {
        printf("INVALID");
        return 0;
    }

    int maxD;

    if (M == 2) {
        maxD = IS_LEAP_YEAR(Y) ? 29 : 28;
    } else if(M == 4 || M == 6 || M == 9 || M == 11) {
        maxD = 30;
    } else {
        maxD = 31;
    }

    if (D <= 0 || D > maxD) {
        printf("INVALID");
        return 0;
    }

    if (D + 1 > maxD) {
        D = 1;
        if (M + 1 > 12) {
            M = 1;
            Y += 1;
        } else {
            M += 1;
        }
    } else {
        D += 1;
    }

    printf("%d-%d-%d", D, M, Y);
}