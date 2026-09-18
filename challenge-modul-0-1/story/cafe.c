#include <stdio.h>

int main() {
    int P, M, H;

    scanf("%d %d %d", &P, &M, &H);

    if (M == 1) {
        P -= ((P * 10) / 100);
    } else if (M == 2) {
        P -= ((P * 20) / 100);
    }
    
    if (H >= 22 && M != 2) {
        P += ((P * 15) / 100);
    } else {
        P -= ((P * 5) / 100);
    }

    int is_voucher = 0;

    if (P > 100000) {
        is_voucher = 1;
    }

    printf("PRICE: %d\nVOUCHER: %s", P, is_voucher ? "YES" : "NO");
}