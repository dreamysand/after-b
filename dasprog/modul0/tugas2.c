#include <stdio.h>
#include <math.h>

int main() {
    int M, B;

    scanf("%d %d", &M, &B);

    int difColor = (int)fmin(M,B);

    int sameColor = fabs(M-B)/2;

    printf("%d %d", difColor, sameColor);
}