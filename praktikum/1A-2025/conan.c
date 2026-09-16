#include <stdio.h>

int main() {
    // Di kota Beika, kejahatan selalu muncul setiap minggu. Untungnya, Conan selalu berhasil
    // mengungkap trik pelaku dan menebak siapa penjahat sebenarnya. Namun, begitu identitas
    // penjahat terkuak, penjahat sering melarikan diri, sementara Conan yang masih terjebak di
    // tubuh anak-anak kesulitan mengejar karena kakinya pendek.
    // Untuk membantu Conan, Prof. Agasa menciptakan kacamata pintar yang menampilkan
    // posisi penjahat relatif terhadap titik awal Conan (0,0) dalam bentuk arah M:
    // • N = depan
    // • E = kanan
    // • S = belakang
    // • W = kiri
    // Kacamata tidak hanya menunjukkan arah, tetapi juga total langkah N yang ditempuh
    // penjahat ke setiap arah. Dengan bantuan kacamata ini, Conan bisa langsung mengetahui
    // koordinat akhir penjahat.
    // Conan kemudian menggunakan skateboard turbo ciptaan Prof. Agasa yang hanya bisa
    // melaju lurus sesuai arah jalan (depan, belakang, kiri, atau kanan). Namun, skateboard
    // tersebut hanya memiliki bahan bakar terbatas sebesar B (1 bahan bakar = 1 langkah).
    // Tentukan apakah Conan dapat mencapai penjahat:
    // • Cetak CONAN KECE BET jika jarak minimum untuk mengejar penjahat ≤ B.
    // • Cetak RAN KECEWA jika bahan bakar tidak cukup.
    // Format Masukan
    // Baris pertama berisi sebuah bilangan bulat B. Empat baris selanjutnya masing-masing berisi
    // arah M dan N langkah.
    // Urutan keempat baris bisa acak.
    // Format Keluaran
    // Print CONAN KECE BET jika Conan bisa mengejar penjahat, atau RAN KECEWA, jika Conan
    // tidak bisa.
    // Batasan
    // • 1 ≤ B ≤ 10
    // 5
    // • Mi selalu terdiri atas keempat arah (N, E, S, W) masing-masing tepat sekali.
    // • 0 ≤ Ni ≤ 105
    // Contoh Masukan #1
    // 7
    // N 10
    // W 0
    // S 10
    // E 5
    // Contoh Keluaran #1
    // CONAN KECE BET
    // Contoh Masukan #2
    // 4
    // N 3
    // E 0
    // W 4
    // S 0
    // Contoh Keluaran #2
    // RAN KECEWA

    int N = 0, S = 0, E = 0, W = 0, B, s, dx, dy; 
    char d;

    scanf("%d", &B);

    scanf(" %c %d", &d, &s);
    if (d == 'N') N += s;
    else if (d == 'S') S += s;
    else if (d == 'E') E += s;
    else if (d == 'W') W += s;

    scanf(" %c %d", &d, &s);
    if (d == 'N') N += s;
    else if (d == 'S') S += s;
    else if (d == 'E') E += s;
    else if (d == 'W') W += s;

    scanf(" %c %d", &d, &s);
    if (d == 'N') N += s;
    else if (d == 'S') S += s;
    else if (d == 'E') E += s;
    else if (d == 'W') W += s;

    scanf(" %c %d", &d, &s);
    if (d == 'N') N += s;
    else if (d == 'S') S += s;
    else if (d == 'E') E += s;
    else if (d == 'W') W += s;

    dx = (W > E) ? (W - E) : (E - W);
    dy = (N > S) ? (N - S) : (S - N);

    if ((dx + dy) <= B) {
        printf("CONAN KECE BET");
    } else {
        printf("RAN KECEWA");
    }
    
}