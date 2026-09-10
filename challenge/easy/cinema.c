#include <stdio.h>

int main() {
    // Soal 1 — Tiket Bioskop
    // Andi ingin menonton film di bioskop. Harga tiket ditentukan berdasarkan usia:
    // Usia 0–5 tahun: gratis
    // Usia 6–12 tahun: Rp20.000
    // Usia 13–59 tahun: Rp35.000
    // Usia 60 tahun ke atas: Rp25.000
    // Buatlah program yang menerima input usia seseorang, kemudian menampilkan harga tiket yang harus dibayar.
    // Sample Input 1
    // 10
    // Sample Output 1
    // Harga tiket: Rp20000
    // Sample Input 2
    // 25
    // Sample Output 2
    // Harga tiket: Rp35000

    int age, price;

    if(scanf("%d", &age) < 0) return 0;

    if (age >= 0 && age < 6) {
        price = 0;
    } else if (age >= 6 && age < 13) {
        price = 20000;
    } else if (age >= 13 && age < 60) {
        price = 35000;
    } else {
        price = 25000;
    }

    printf("Harga Tiket: Rp%d", price);
}