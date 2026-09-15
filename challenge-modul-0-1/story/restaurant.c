#include <stdio.h>

int main() {
    double H;
    char M;

    scanf("%lf %c", &H, &M);

    double Hd = (M == 'M') ? (H < 50000) ? (H - (H * 5 / 100)) : (H > 100000) ? (H - (H * 15 / 100)) : (H - (H * 10 / 100)) : H;
    H = (M == 'M') ? (Hd < 75000) ? Hd + 5000 : Hd + 10000 : Hd;

    printf("%.2lf", H);
}