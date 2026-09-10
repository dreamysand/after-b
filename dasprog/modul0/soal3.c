#include <stdio.h>

int main() {
    #define OPERATION_A(a,b,c) (((a) + (b)) / (c))

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f\n", (float)OPERATION_A(a, b, c));
    return 0;
}