#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    int Al = 0, Bl = 0, Cl = 0;

    if (!(B == 1)) {
        Al += 1;
    }

    if (!(C == 0)) {
        Bl += 1;
    }

    if (!(A == 1 && B == 1)) {
        Cl += 1;
    }
    
    if (Al && !Bl && !Cl) {
        printf("ALDEN LIED");
    } else if (!Al && Bl && !Cl) {
        printf("BORIS LIED");
    } else if (!Al && !Bl && Cl) {
        printf("CEDRIC LIED");
    } else {
        printf("INVALID TESTIMONY");
    }
    
}