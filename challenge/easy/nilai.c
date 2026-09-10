#include <stdio.h>

int main() {
    // Soal 4 — Nilai Mahasiswa
    // Budi baru saja mendapatkan nilai ujian. Predikat nilainya ditentukan sebagai berikut:
    // 85–100 → A
    // 75–84 → B
    // 65–74 → C
    // 50–64 → D
    // 0–49 → E
    // Buatlah program yang menerima nilai Budi dan menampilkan predikat yang diperolehnya.
    // Sample Input
    // 87
    // Sample Output
    // Predikat A
    // Sample Input
    // 63
    // Sample Output
    // Predikat D

    int score;
    char predicate;

    if(scanf("%d", &score) < 0) return 0;

    if (score >= 0 && score < 50)
    {
        predicate = 'E';
    } else if (score >= 50 && score < 65) {
        predicate = 'D';
    } else if (score >= 65 && score < 75) {
        predicate = 'C';
    } else if (score >= 75 && score < 85) {
        predicate = 'B';
    } else {
        predicate = 'A';
    }

    printf("Predikat %c", predicate);
}
