#include <stdio.h>

int main() {
    int Aa, Da, Ha, Ab, Db, Hb;

    scanf("%d %d %d %d %d %d", &Aa, &Da, &Ha, &Ab, &Db, &Hb);

    int damageA = (Aa - Db) < 0 ? 0 : (Aa - Db), damageB = (Ab - Da) < 0 ? 0 : (Ab - Da);
    if (
        (Ha - damageB > 0 && Hb - damageA <= 0) ||
        (Ha - damageB > Hb - damageA)
    ) {
        printf("KNIGHT A");
    } else if (
        (Ha - damageB <= 0 && Hb - damageA > 0) ||
        (Ha - damageB < Hb - damageA)
    ) {
        printf("KNIGHT B");
    } else {
        printf("DRAW");
    }
    
}