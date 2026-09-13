#include <stdio.h>

int main() {
    // King Indo Lolos Pildun
    // Oleh Sasmita Wiropati
    // Deskripsi
    // Pada bulan Oktober nanti akan ada pertandingan sepak bola yang telah ditunggu-tunggu oleh
    // banyak orang, pertandingan untuk kualifikasi AFC babak keempat piala dunia. Indonesia
    // berada dalam grup B dengan Saudi Arabia dan Iraq sebagai lawannya.
    // Apabila Indonesia berhasil meraih posisi tertinggi, maka akan lolos ke piala dunia, sedangkan
    // apabila berada di posisi terendah dalam grup, maka Indonesia akan tereliminasi. Andaikan
    // Indonesia berada di posisi kedua, Indonesia akan lanjut ke babak kelima melawan runner up dari
    // grup A untuk mendapatkan posisi dalam playoff.
    // Apabila hasil pertandingan bagi suatu tim:
    // 1. Menang, mendapatkan 3 poin
    // 2. Seri/Imbang, kedua tim mendapatkan 1 poin
    // 3. Kalah, tidak mendapatkan poin
    // Apabila ada dua atau lebih tim dengan poin akhir grup yang imbang, maka kedudukan akan
    // ditentukan dengan mendahulukan abjad inisial nama tim,
    // I (Indonesia) → R (Iraq) → S (Saudi)
    // Dari hasil 3 pertandingan dalam grup B, tentukan apakah Indonesia berhasil lolos, atau lanjut ke
    // babak kelima, atau tereliminasi. Berikut adalah jadwal dan urutan pertandingan kualifikasi AFC
    // babak keempat piala dunia:
    // Tanggal Grup B
    // 8 Okt Indonesia vs Saudi Arabia
    // 11 Okt Iraq vs Indonesia
    // 14 Okt Saudi Arabia vs Iraq
    // Format Masukan
    // Terdapat 3 karakter yang merepresentasikan hasil pertandingan grup B sesuai jadwal di atas.
    // Apabila suatu tim menang, maka akan direpresentasikan dengan inisialnya, sedangkan apabila
    // imbang maka akan direpresentasikan dengan karakter ‘D’.
    // Hasil1Hasil2Hasil3
    // Format Keluaran
    // Format keluaran disesuaikan dengan kedudukan Indonesia dalam grup setelah 3 pertandingan:
    // 1. Apabila menduduki posisi tertinggi / lolos pildun:
    // King Indo lolos pildun!!!
    // 2. Apabila menduduki posisi kedua / lanjut ke babak kelima:
    // Masih ada harapan! Tetap semangat!
    // 3. Apabila menduduki posisi terendah / tereliminasi:
    // Kali ini kami menyatakan kalah, tapi selanjutnya kami akan menang!
    // Contoh 1
    // Contoh Masukan
    // IRS
    // Contoh Keluaran
    // King Indo lolos pildun!!!
    // Penjelasan
    // Hasil pertandingan adalah sebagai berikut:
    // Tanggal Pertandingan Hasil
    // 8 Okt Indonesia vs Saudi Arabia Indonesia (+3)
    // 11 Okt Iraq vs Indonesia Iraq (+3)
    // 14 Okt Saudi Arabia vs Iraq Saudi (+3)
    // Skor Tabel
    // Kedudukan Negara Poin
    // 1 Indonesia 3
    // 2 Iraq 3
    // 3 Saudi Arabia 3
    // Karena Indonesia, Iraq, dan Saudi Arabia saling memiliki poin akhir yang imbang berarti
    // dengan kedudukan akhir akan ditentukan menggunakan abjad inisialnya I → R → S.
    // Contoh 2
    // Contoh Masukan
    // IRD
    // Contoh Keluaran
    // Masih ada harapan! Tetap semangat!
    // Penjelasan
    // Hasil pertandingan adalah sebagai berikut:
    // Tanggal Pertandingan Hasil
    // 8 Okt Indonesia vs Saudi Arabia Indonesia (+3)
    // 11 Okt Iraq vs Indonesia Iraq (+3)
    // 14 Okt Saudi Arabia vs Iraq Saudi & Iraq (+1)
    // Skor Tabel
    // Kedudukan Negara Poin
    // 1 Iraq 4
    // 2 Indonesia 3
    // 3 Saudi Arabia 1
    // Contoh 3
    // Contoh Masukan
    // SRD
    // Contoh Keluaran
    // Kali ini kami menyatakan kalah, tapi selanjutnya kami akan menang!
    // Penjelasan
    // Hasil pertandingan adalah sebagai berikut:
    // Tanggal Pertandingan Hasil
    // 8 Okt Indonesia vs Saudi Arabia Saudi (+3)
    // 11 Okt Iraq vs Indonesia Iraq (+3)
    // 14 Okt Saudi Arabia vs Iraq Saudi & Iraq (+1)
    // Skor Tabel
    // Kedudukan Negara Poin
    // 1 Iraq 4
    // 2 Saudi Arabia 4
    // 3 Indonesia 0
    // Kedua poin tim Iraq dan Saudi sama, tetapi dengan aturan abjad maka R (Iraq) → S (Saudi)

    int I = 0, R = 0, S = 0;
    char in[3];

    scanf("%s", &in);

    I += (in[0] == 'I') ? 3 : (in[0] == 'D') ? 1 : 0;
    S += (in[0] == 'S') ? 3 : (in[0] == 'D') ? 1 : 0;

    I += (in[1] == 'I') ? 3 : (in[0] == 'D') ? 1 : 0;
    R += (in[1] == 'R') ? 3 : (in[0] == 'D') ? 1 : 0;

    R += (in[2] == 'R') ? 3 : (in[0] == 'D') ? 1 : 0;
    S += (in[2] == 'S') ? 3 : (in[0] == 'D') ? 1 : 0;

    if ((I >= R) && (I >= S)) {
        printf("King Indo lolos pildun!!!");
    } else if (
        ((I < S) && (I > R)) ||
        ((I < R) && (I > S))
    ) {
        printf("Masih ada harapan! Tetap semangat");
    } else {
        printf("Kali ini kami menyatakan kalah, tapi selanjutnya kami akan menang!");
    }
    
    
}