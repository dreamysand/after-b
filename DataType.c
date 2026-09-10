#include <stdio.h>

// 1. BASIC PRIMITIVE
void primitive() {
    char   grade = 'A';          // 1 byte
    int    umur  = 20;           // biasanya 4 byte
    float  nilai = 85.5f;        // 4 byte
    double pi    = 3.1415926535; // 8 byte
}

// 2. INTEGER VARIATIONS (modifier)
void integer_variations() {
    short        a = 10;              // 2 byte, kecil
    int          b = 1000;            // 4 byte, default
    long         c = 100000L;         // 4 atau 8 byte
    long long    d = 9999999999LL;    // minimal 8 byte

    unsigned int u = 255;             // 0 sampai 4294967295 (ga ada negatif)
    signed int   s = -50;             // bisa negatif (ini sama aja kayak int biasa)
}

// 3. FLOATING VARIATIONS
void floating_variations() {
    float       f = 3.14f;           // ~7 digit presisi
    double      d = 3.1415926535;    // ~15 digit presisi
    long double ld = 3.141592653589793238L; // presisi lebih tinggi
}

// 4. STRUCT (komposit - beda tipe)
struct Mahasiswa {
    char nama[50];
    int  nim;
    float ipk;
};

void contoh_struct() {
    struct Mahasiswa m1 = {"Andi", 12345, 3.75};
    printf("Nama: %s, NIM: %d, IPK: %.2f\n", m1.nama, m1.nim, m1.ipk);
}

// 5. UNION (semua field berbagi memori yang sama)
union Data {
    int    angka;
    float  desimal;
    char   huruf;
};

void contoh_union() {
    union Data u;
    u.angka = 65;
    printf("angka: %d, huruf: %c (berbagi memori)\n", u.angka, u.huruf);
    // Output: angka: 65, huruf: A (karena ASCII 65 = 'A')
}

// 6. ENUM (daftar konstanta bulat)
enum Hari { SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, AHAD };

void contoh_enum() {
    enum Hari today = RABU;
    if (today == RABU) {
        printf("Hari ke-%d (index mulai dari 0)\n", today);
    }
}

// 7. ARRAY (kumpulan sejenis)
void contoh_array() {
    int    angka[5] = {1, 2, 3, 4, 5};
    char   huruf[3] = {'a', 'b', 'c'};
    double nilai[3] = {1.1, 2.2, 3.3};

    // Loop
    for (int i = 0; i < 5; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
}

// 8. POINTER (menyimpan alamat memori)
void contoh_pointer() {
    int x = 10;
    int *ptr = &x;     // ptr menyimpan alamat x

    printf("Nilai x   : %d\n", x);
    printf("Alamat x  : %p\n", (void*)ptr);
    printf("Nilai via ptr: %d\n", *ptr); // dereference

    *ptr = 20; // ubah x lewat pointer
    printf("x setelah diubah: %d\n", x);
}

// 9. VOID (tipe kosong / no return)
void cetak_halo(void) {
    printf("Halo!\n");
}

// int main buat demo
int main() {
    printf("=== PRIMITIVE ===\n");
    int    umur = 20;
    float  n   = 85.5f;
    printf("umur: %d, nilai: %.1f\n", umur, n);

    printf("\n=== INTEGER VARIATIONS ===\n");
    unsigned int u = 255;
    printf("unsigned int: %u\n", u);

    printf("\n=== FLOATING ===\n");
    double pi = 3.1415926535;
    printf("double pi: %.10f\n", pi);

    printf("\n=== STRUCT ===\n");
    struct Mahasiswa m1 = {"Andi", 12345, 3.75};
    printf("Nama: %s, NIM: %d, IPK: %.2f\n", m1.nama, m1.nim, m1.ipk);

    printf("\n=== UNION ===\n");
    union Data u1;
    u1.angka = 65;
    printf("angka: %d, huruf: %c\n", u1.angka, u1.huruf);

    printf("\n=== ENUM ===\n");
    enum Hari today = RABU;
    printf("Hari ke-%d\n", today);

    printf("\n=== ARRAY ===\n");
    int angka[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) printf("%d ", angka[i]);
    printf("\n");

    printf("\n=== POINTER ===\n");
    int x = 10;
    int *ptr = &x;
    printf("x=%d, alamat=%p, nilai ptr=%d\n", x, (void*)ptr, *ptr);

    printf("\n=== VOID FUNCTION ===\n");
    cetak_halo();

    return 0;
}
