#include <stdio.h>

int main() {
    double a, b, c, p, q, r;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &p, &q, &r);
        
    double D  = (a * q) - (b * p);
    double Dx = (c * q) - (b * r);
    double Dy = (a * r) - (c * p);

    if (D != 0) {
        double x = Dx / D;
        double y = Dy / D;

        if (x == 0) x = 0;
        if (y == 0) y = 0;

        printf("SATU SOLUSI\n");
        printf("%.2f %.2f\n", x, y);
    } else {
        if (Dx == 0 && Dy == 0) {
            printf("BANYAK SOLUSI\n");
        } else {
            printf("TIDAK ADA SOLUSI\n");
        }
    }
}