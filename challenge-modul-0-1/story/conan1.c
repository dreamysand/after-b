#include <stdio.h>

int main() {
    // Di sebuah kota yang selalu diguyur hujan, Conan sedang menyelidiki sebuah pesan rahasia yang ditinggalkan oleh seorang pelaku.
    // Pesan tersebut tidak ditulis dalam bentuk kalimat, melainkan berupa tiga bilangan A, B, dan C. Profesor Agasa menemukan bahwa ketiga bilangan tersebut sebenarnya mewakili tiga kemungkinan koordinat kunci.
    // Untuk menemukan kunci sebenarnya, Conan harus mengambil bilangan yang berada di antara dua bilangan lainnya.
    // Sebagai contoh, jika tiga bilangan yang ditemukan adalah 17, 5, dan 12, maka kunci yang dicari adalah 12, karena:
    // 5 < 12 < 17
    // Ketiga bilangan dipastikan berbeda.
    // Bantulah Conan menentukan bilangan yang menjadi kunci.
    // Format Masukan
    // Satu baris berisi tiga bilangan bulat:
    // A B C
    // Format Keluaran
    // Cetak bilangan yang berada di antara dua bilangan lainnya.
    // Batasan
    // -10^9 ≤ A, B, C ≤ 10^9
    // Ketiga bilangan berbeda.

    int A, B, C, m;

    scanf("%d %d %d", &A, &B, &C);

    if (
        (A == B) || 
        (A == C) || 
        (B == C)
    ) return 0;
    
    m = ((A > B && B > C) || (C > B && B > A)) ? B : ((B > A && A > C) || (C > A && A > B)) ? A : C;

    printf("%d", m);
}