#include <stdio.h>

int main() {
    // Soal 6 — Diskon Belanja
    // Sulis sedang berbelanja di sebuah toko. Toko tersebut memberikan diskon berdasarkan total belanja:
    // Kurang dari Rp100.000 → tidak mendapat diskon
    // Rp100.000–Rp499.999 → diskon 10%
    // Rp500.000–Rp999.999 → diskon 20%
    // Rp1.000.000 atau lebih → diskon 30%
    // Buatlah program yang menerima total belanja Sulis dan menampilkan:
    // Besarnya diskon
    // Total yang harus dibayar setelah diskon
    // Sample Input
    // 750000
    // Sample Output
    // Diskon: 20%
    // Total bayar: Rp600000
    
    int price, discount, price_after_discount;

    if (scanf("%d", &price) <= 0) return 0;

    if (price < 100000) {
        discount = 0;
    } else if (price >= 100000 && price < 500000) {
        discount = 10;
    } else if (price >= 500000 && price < 1000000) {
        discount = 20;
    } else {
        discount = 30;
    }

    price_after_discount = price - ((price * discount) / 100);
    printf("Diskon: %d%%\nTotal bayar: %d", discount, price_after_discount);
}