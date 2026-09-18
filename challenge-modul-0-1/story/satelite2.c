#include <stdio.h>
#define ABS(x) (x < 0) ? (-x * -1) : x

int main() {
    int X, V, E;

    scanf("%d %d %d", &X, &V, &E);

    if ((ABS(X) <= 100) && (E >= 50)) {
        printf("SAFE");
    } else if (
        ((ABS(X) > 100 && ABS(X) <= 200) && (E < 50 && E >= 20)) ||
        (((ABS(X) > 200) || (E < 20)) && V == 0)
    ) {
        printf("WARNING");
    } else {
        printf("CRITICAL");
    }
    
}