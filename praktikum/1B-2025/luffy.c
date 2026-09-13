#include <stdio.h>
#define POW_2(x) x * x
#define PYTHAGORAS(a, b, c) POW_2(a) + POW_2(b) == POW_2(c)

int main() {
    // Luffy adalah seorang petualang sejati. Suatu hari, ketika sedang berjalan-jalan di Pulau
    // Skypiea, ia mengumpulkan ranting-ranting pohon untuk dijadikan kayu bakar. Semua kayu
    // yang ia temukan berbentuk lurus dan tidak bengkok.
    // Ia mengumpulkan banyak ranting pohon, lalu mulai berandai-andai: jika ia mengambil
    // tiga ranting secara acak dari tumpukan tersebut, apakah ia bisa membentuk sebuah segitiga
    // siku-siku? Dari setiap tiga ranting yang diambil, pasti ada satu ranting yang paling panjang.
    // Karena Luffy tidak begitu pandai dalam menyelesaikan masalah seperti ini, ia pun meminta
    // bantuanmu sebagai mahasiswa Informatika ITS.
    // Format Masukan
    // Tiga bilangan bulat 𝑵𝑵 yang menyatakan panjang tiga tongkat yang diambil oleh Luffy.
    // Format Keluaran
    // • Jika segitiga siku-siku dapat dibentuk dari ranting yang tersedia, cetak:
    // "Yatta, aku bisa membentuk segitiga!"
    // • Jika tidak memungkinkan untuk membentuk segitiga siku-siku, cetak:
    // "Gomenasai, segitiga tidak dapat dibuat."
    // Batasan
    // 1 ≤ 𝑁𝑁 < 1010
    // DILARANG KERAS MENGGUNAKAN ALGORITMA DILUAR MODUL 0 DAN MODUL 1
    // Contoh Masukan 1
    // Contoh Keluaran 1
    // Penjelasan
    // Ranting sepanjang 3, 4, dan 5 satuan dapat digunakan untuk membentuk segitiga siku-siku.
    // Contoh Masukan 2
    // Contoh Keluaran 2
    // Penjelasan
    // Ranting sepanjang 1, 1, dan 1 satuan tidak dapat digunakan untuk membentuk segitiga sikusiku.
    
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (PYTHAGORAS(a, b, c)) printf("Yatta, aku bisa membentuk segitiga!");
    else printf("Gomenasai, segitiga tidak dapat dibuat.");
    
}