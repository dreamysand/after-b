#include <stdio.h>
#define HOUR_MINUTE(h,m) ((h * 60) + m)
int main() {
    int jam, menit, kendaraan;

    scanf("%d", &jam);
    scanf(" %d", &menit);
    scanf(" %d", &kendaraan);

    if ((HOUR_MINUTE(jam, menit) >= HOUR_MINUTE(22,0)) || 
        (HOUR_MINUTE(jam, menit) <= HOUR_MINUTE(5,59)) ||
        (((HOUR_MINUTE(jam, menit) >= HOUR_MINUTE(7,0)) && 
        (HOUR_MINUTE(jam, menit) <= HOUR_MINUTE(9,0))) && (kendaraan >= 100)) ||
        (((HOUR_MINUTE(jam, menit) >= HOUR_MINUTE(16,0)) && 
        (HOUR_MINUTE(jam, menit) <= HOUR_MINUTE(19,0))) && (kendaraan >= 100)) ||
        (!((HOUR_MINUTE(jam, menit) >= HOUR_MINUTE(22,0)) || 
        (HOUR_MINUTE(jam, menit) <= HOUR_MINUTE(5,59)) || 
        ((HOUR_MINUTE(jam, menit) >= HOUR_MINUTE(7,0)) && 
        (HOUR_MINUTE(jam, menit) <= HOUR_MINUTE(9,0))) || 
        ((HOUR_MINUTE(jam, menit) >= HOUR_MINUTE(16,0)) && 
        (HOUR_MINUTE(jam, menit) <= HOUR_MINUTE(19,0)))) && (kendaraan > 150))
    ) {
        printf("FULL");
        return 0;
    }

    printf("NORMAL");
}