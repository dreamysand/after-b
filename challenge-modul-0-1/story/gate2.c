#include <stdio.h>

int main() {
    char G;
    int S, M, R, B;

    scanf("%c %d %d %d %d", &G, &S, &M, &R, &B);

    if (G != 'R' && G != 'B' && G != 'H') {
        printf("INVALID GATE");
        return 0;
    }
    
    if (
        (G == 'R' && S >= R) ||
        (G == 'B' && M >= B) ||
        (G == 'H' && (S % 2 == M % 2))
    ) {
        printf("GATE OPENED");
    } else {
        printf("GATE CLOSED");
    }

}