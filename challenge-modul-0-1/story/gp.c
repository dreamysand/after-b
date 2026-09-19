#include <stdio.h>

int main() {
    int Ta, Pa, Tb, Pb;

    scanf("%d %d %d %d", &Ta, &Pa, &Tb, &Pb);

    if ((Ta == Tb) && (Pa == Pb)) {
        printf("DRAW");
    } else {
        printf(
            (Tb - Ta >= 20) || 
            ((Ta - Tb < 20) && (Pb - Pa >= 3)) || 
            ((Ta - Tb < 20) && (Pa - Pb < 3) && (Ta < Tb)) || 
            ((Ta == Tb) && (Pa < Pb))
            ? "PLAYER A" : "PLAYER B"
        );
    }
}