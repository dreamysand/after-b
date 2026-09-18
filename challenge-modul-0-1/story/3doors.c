#include <stdio.h>

int main() {
    int D, R, B, G;

    scanf("%d %d %d %d", &D, &R, &B, &G);

    int Rs = D == 2, 
    Gs = D != 1,
    Bs = !Gs;

    if (
        (Rs == R) &&
        (Gs == G) &&
        (Bs == B)
    ) {
        printf("CONSISTENT");
    } else printf("CONTRADICTION");
}