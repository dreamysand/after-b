#include <stdio.h>
#define IS_LEAP_YEAR(y) ((y % 400) == 0) || ((y % 4) == 0) && ((y % 100) > 0)

int main() {
    int DD, MM, YYYY;

    scanf("%d", &DD);
    scanf(" %d", &MM);
    scanf(" %d", &YYYY);

    if (MM <= 0 || MM > 12) {
        printf("INVALID DATE");
        return 0;
    }

    int maxDD;

    if (MM == 2) {
        maxDD = IS_LEAP_YEAR(YYYY) ? 29 : 28;
    } else if(MM == 4 || MM == 6 || MM == 9 || MM == 11) {
        maxDD = 30;
    } else {
        maxDD = 31;
    }

    if (DD <= 0 || DD > maxDD) {
        printf("INVALID DATE");
        return 0;
    }

    printf("%d-%d-%d", DD, MM, YYYY);
}