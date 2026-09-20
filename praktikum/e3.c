#include <stdio.h>

int main() {
    long long a, b, R;
    long long m, c;

    if (scanf("%lld %lld %lld", &a, &b, &R) != 3) return 0;
    if (scanf("%lld %lld", &m, &c) != 2) return 0;

    long long k = c - b;

    long long A = 1 + m * m;
    long long B = 2 * (m * k - a);
    long long C = a * a + k * k - R;

    long long D = B * B - 4 * A * C;

    if (D > 0) {
        printf("We're cooked.");
    } else if (D == 0) {
        printf("Kegores dikit ga ngaruh.");
    } else {
        printf("We're so back.");
    }

}