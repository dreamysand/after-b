#include <stdio.h>

int main() {
    long long D;
    int E, P;

    scanf("%lld %d %d", &D, &E, &P);
    
    if (
        (D <= 500000) && (P >= 70 && P < 100) && (!E) ||
        (D <= 500000) && (P > 100)
    ) {
        printf("TRANSMISSION SUCCESS");
        return 0;
    }

    printf("TRANSMISSION FAILED");
}