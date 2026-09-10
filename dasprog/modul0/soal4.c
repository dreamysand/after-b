#include <stdio.h>

int main() {
    #define SUM(a,b,c,d,e) ((a) + (b) + (c) + (d) + (e))
    #define AVERAGE(a,b,c,d,e) (SUM(a,b,c,d,e) / 5)

    float a, b, c, d, e;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    printf("%d %.1f", (int)SUM(a, b, c, d, e), AVERAGE(a, b, c, d, e));
    return 0;
}