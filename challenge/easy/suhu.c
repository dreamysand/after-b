#include <stdio.h>

int main() {
    // Soal 12 — Kategori Suhu
    // Sebuah sensor mencatat suhu dalam derajat Celsius. Tentukan kondisi suhu berdasarkan aturan berikut:
    // Di bawah 0°C → Sangat Dingin
    // 0°C–15°C → Dingin
    // 16°C–30°C → Normal
    // 31°C–40°C → Panas
    // Di atas 40°C → Sangat Panas
    // Buatlah program yang menerima suhu dan menampilkan kategorinya.
    // Sample Input
    // 35
    // Sample Output
    // Panas

    float temp;

    scanf("%f", &temp);

    if (temp < 0) {
        printf("Sangat dingin");
    } else if (temp >= 0 && temp < 16) {
        printf("Dingin");
    } else if (temp >= 16 && temp < 31) {
        printf("Normal");
    } else if (temp >= 31 && temp < 41) {
        printf("Panas");
    } else {
        printf("Sangat panas");
    }

}