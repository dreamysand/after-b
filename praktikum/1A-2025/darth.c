#include <stdio.h>

int main() {
    // Kemarahan Vader memuncak saat ia kembali berhadapan dengan gurunya. Dipenuhi
    // dendam yang tak terbendung, ia berniat menghabisi Kenobi dengan segala cara. Namun
    // Kenobi tetap berdiri tenang, menghadapi muridnya yang tersulut emosi dengan kesabaran
    // dan kewaspadaan.
    // Tempat Kenobi dan Vader bertarung menyerupai sebuah bidang dua dimensi dengan ukuran
    // N × M (N baris, M kolom). Koordinat (B, K) menyatakan kotak pada baris ke-B dan kolom keK. Posisi Kenobi terletak pada koordinat (BK, KK) dan posisi Vader terletak pada koordinat (BV,
    // KV).
    // Setiap detik genap, Vader dapat bergerak satu kotak ke salah satu dari empat arah (utara,
    // timur, selatan, barat). Sedangkan pada setiap detik ganjil, Kenobi dapat menggunakan
    // kekuatannya untuk membangun tembok di kotak mana pun, kecuali di kotak yang
    // ditempati Kenobi maupun Vader saat itu. Jika ada tembok di sebuah kotak, maka Vader
    // tidak dapat melangkah ke kotak tersebut. Pertarungan dimulai pada detik ke-1 dengan
    // Kenobi terlebih dahulu membangun tembok. Pada detik ke-2, giliran Vader bergerak, dan
    // seterusnya keduanya bergantian setiap detik.
    // Vader menang bila ia berhasil mencapai kotak tempat Kenobi berada. Kenobi menang bila
    // ia berhasil membangun tembok sehingga tidak ada lagi jalur yang dapat digunakan Vader
    // untuk mencapai dirinya. Tentukan siapa yang akan menang bila keduanya bertindak
    // dengan strategi terbaik.
    // Batasan
    // • 2 ≤ N, M ≤ 109
    // • 1 ≤ BK, BV ≤ N
    // • 1 ≤ KK, KV ≤ M
    // • (BK, KK) ≠ (BV, KV)
    // Format Masukan
    // Masukan diberikan dalam format berikut:
    // N M
    // BK KK BV KV
    // Format Keluaran
    // Jika Vader berhasil mencapai kotak tempat Kenobi berada, keluarkan:
    // [Now I am the master.]
    // Jika Kenobi berhasil menutup semua jalur yang dapat dilalui Vader, keluarkan:
    // [Only a master of evil, Darth.]
    // Contoh Masukan
    // 3 6
    // 2 2 1 6
    // Contoh Keluaran
    // Only a master of evil, Darth.
    
    int N, M, Bk, Kk, Bv, Kv, dx, dy, d;

    scanf("%d %d", &N, &M);
    scanf("%d %d %d %d", &Bk, &Kk, &Bv, &Kv);

    if (((Bk > N) || (Bv > N)) || ((Kk > M) || (Kv > M))) return 0;
    
    dx = (Kv > Kk) ? (Kv - Kk) : (Kk - Kv);
    dy = (Bv > Bk) ? (Bv - Bk) : (Bk - Bv);

    d = dx + dy;

    if (d <= 2) printf("Now I am the master.");
    else if (d >= 3) printf("Only a master of evil, Darth.");
}