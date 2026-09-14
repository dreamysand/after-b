#include <stdio.h>

int main() {
    int PA, DA, SA, PB, DB, SB, atA, atB;

    scanf("%d %d %d", &PA, &DA, &SA);
    scanf("%d %d %d", &PB, &DB, &SB);

    atA = ((PA - DB) < 0) ? 0 : (PA - DB);
    atB = ((PB - DA) < 0) ? 0 : (PB - DA);

    if (atA > atB) {
        printf("ASTER");
    } else if (atB > atA) {
        printf("BRUNO");
    } else {
        printf((SA > SB) ? "ASTER" : (SB > SA) ? "BRUNO" : "SERI");
    }
}