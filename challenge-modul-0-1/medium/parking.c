#include <stdio.h>

int main() {
    // Soal 1 — Tarif Parkir
    // Sebuah tempat parkir menentukan tarif berdasarkan lama parkir:
    // 1–2 jam → Rp5.000
    // 3–5 jam → Rp8.000
    // 6–10 jam → Rp12.000
    // Lebih dari 10 jam → Rp15.000
    // Input berupa sebuah bilangan bulat jam.
    // Program harus menampilkan tarif yang harus dibayar.
    // Contoh:
    // Input:
    // 4
    // Output:
    // 8000
    // Batasan:
    // jam > 0
    // Gunakan percabangan.

    int jam;

    scanf("%d", &jam);

    if (jam <= 0) {
        return 0;
    } else if (jam < 3) {
        printf("5000");
    } else if (jam < 6) {
        printf("8000");
    } else if (jam < 11) {
        printf("12000");
    } else {
        printf("15000");
    }
}