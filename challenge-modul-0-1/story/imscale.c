#include <stdio.h>

int main() {
    int AB, BC, AC;

    scanf("%d %d %d", &AB, &BC, &AC);

    if (AB && AC) {
        printf("A HEAVIEST");        
    } else if (!AB && BC) {
        printf("B HEAVIEST");
    } else if (!BC && !AC) {
        printf("C HEAVIEST");
    } else {
        printf("IMPOSSIBLE");
    }
}