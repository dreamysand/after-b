#include <stdio.h>
#define PARKING_PER_HOUR(first, next, hour) first + (hour * next)

int main() {
    // Soal 13 — Tarif Parkir
    // Sebuah tempat parkir menetapkan tarif berdasarkan lama kendaraan parkir.
    // 1 jam pertama → Rp3.000
    // Setiap jam berikutnya → Rp2.000
    // Maksimal tarif dalam satu hari → Rp20.000
    // Buatlah program yang menerima lama parkir dalam satuan jam dan menentukan total biaya parkir.
    // Sample Input
    // 5
    // Sample Output
    // Biaya parkir: Rp11000
    // Karena:
    // 3000 + (4 × 2000) = 11000
    // Jika lama parkir menghasilkan tarif lebih dari Rp20.000, maka tarif yang dibayar tetap Rp20.000.
    
    int first_fee, next_fee, total_fee, hour;

    first_fee = 3000;
    next_fee = 2000;

    if (scanf("%d", &hour) < 0) return 0;

    total_fee = PARKING_PER_HOUR(first_fee, next_fee, hour) <= 20000 ? PARKING_PER_HOUR(first_fee, next_fee, hour) : 20000;
    printf("Biaya parkir: Rp%d", total_fee);
}