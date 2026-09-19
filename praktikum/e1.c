#include <stdio.h>

int main() {
    int M, V;

    scanf("%d %d", &M, &V);

    int total = 0, tarif_dasar;
    if (M <= 60) {
        tarif_dasar = 3000;
    } else {
        int H = (M / 60) - 1;
        int sisa_menit = M - ((H + 1) * 60);

        tarif_dasar = 3000 + (2000 * H);

        tarif_dasar += (sisa_menit > 0) ? 1 * 2000 : 0;
    }

    if (tarif_dasar > 25000) tarif_dasar = 25000;

    total += tarif_dasar;
    if (V) total += 1000;

    printf("%d", total);
}
