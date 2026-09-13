#include <stdio.h>
#define FINAL_SCORE(t, uts, uas) ((20 * t) / 100) + ((30 * uts) / 100) + ((50 * uas) / 100)

int main() {
    // Soal 2 — Nilai Mahasiswa
    // Input berupa tiga nilai:
    // nilai_tugas nilai_uts nilai_uas
    // Hitung nilai akhir:
    // nilai_akhir = 20% tugas + 30% UTS + 50% UAS
    // Kemudian tentukan predikat:
    // Nilai Akhir	Predikat
    // >= 85	A
    // >= 75	B
    // >= 65	C
    // >= 50	D
    // < 50	E
    // Tampilkan nilai akhir dengan 2 angka di belakang koma, kemudian predikat.
    // Contoh:
    // Input:
    // 80 70 90
    // Output:
    // 82.00
    // B

    float nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

    scanf("%f %f %f", &nilai_tugas, &nilai_uts, &nilai_uas);

    if ((nilai_tugas < 0) || (nilai_uts < 0) || (nilai_uas < 0)) return 0;
    
    nilai_akhir = FINAL_SCORE(nilai_tugas, nilai_uts, nilai_uas);

    printf("%.2f\n", nilai_akhir);
    if (nilai_akhir < 50) {
        printf("E");
    } else if (nilai_akhir >= 50 && nilai_akhir < 65) {
        printf("D");
    } else if (nilai_akhir >= 65 && nilai_akhir < 75) {
        printf("C");
    } else if (nilai_akhir >= 75 && nilai_akhir < 85) {
        printf("B");
    } else {
        printf("A");
    }
    
}