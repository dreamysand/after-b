#include <stdio.h>

int main() {
    long long S, T;

    scanf("%lld %lld", &S, &T);
    
    int HH = 0, MM = 0, SS = 0;

    if ((S - T) < 0) {
        S += (S - T);
    } else {
        S += T;
    }

    HH = S / 3600;
    MM = (S - (HH * 3600)) / 60;
    SS = (S - (HH * 3600)) % 60;

    if ((HH % 24) > 0) HH %= 24;

    printf("%d %d %d", HH, MM, SS);
}