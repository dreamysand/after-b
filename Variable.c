#include <stdio.h>
#include <stdlib.h>  // untuk malloc

// 1. GLOBAL VARIABLE (di luar function)
int skor_global = 0;

// 2. EXTERN (deklarasi referensi, biasanya di header)
extern int skor_extern;  // nanti didefinisikan di file lain

// 3. STATIC GLOBAL (hanya bisa diakses di file ini)
static int hitungan_file = 100;

// 4. STATIC LOCAL (tetap hidup antar pemanggilan fungsi)
void increment_static() {
    static int hit = 0;  // cuma diinisialisasi 1x, tidak hilang
    hit++;
    printf("static local: %d\n", hit);
}

// 5. REGISTER VARIABLE (minta disimpan di register CPU)
void register_example() {
    register int i;
    for (i = 0; i < 3; i++) {
        printf("register i: %d\n", i);
    }
}

// 6. DYNAMIC ALLOCATION (heap, pake malloc)
void dynamic_example() {
    int *arr = (int*)malloc(3 * sizeof(int));
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    printf("dynamic arr: %d %d %d\n", arr[0], arr[1], arr[2]);
    free(arr);  // JANGAN LUPA FREE
}

// 7. TYPEDEF ALIAS (bikin alias tipe baru)
typedef struct {
    char nama[20];
    int  level;
} Player;

void typedef_example() {
    Player p1 = {"Rizky", 5};
    printf("typedef: nama=%s, level=%d\n", p1.nama, p1.level);
}

// 8. COMPOUND LITERAL (C99+, buat struct tanpa deklarasi variabel terpisah)
void compound_example() {
    struct { int x; int y; } point = {.x = 10, .y = 20};
    printf("compound literal: x=%d, y=%d\n", point.x, point.y);
}

int main() {
    // === 1. LOCAL VARIABLE (otomatis / auto) ===
    int a = 5;           // deklarasi + inisialisasi
    auto double b = 3.14; // keyword 'auto' opsional di C modern
    printf("local: a=%d, b=%.2f\n", a, b);

    // === 2. INISIALISASI TANPA TIPE (C99+ designated init, tapi tidak untuk primitive) ===
    // Untuk primitive tetap harus tipe: int x = 10;

    // === 3. GLOBAL VARIABLE ===
    skor_global = 100;
    printf("global: %d\n", skor_global);

    // === 4. STATIC LOCAL ===
    increment_static(); // 1
    increment_static(); // 2
    increment_static(); // 3

    // === 5. REGISTER ===
    register_example();

    // === 6. DYNAMIC ===
    dynamic_example();

    // === 7. TYPEDEF ===
    typedef_example();

    // === 8. COMPOUND LITERAL ===
    compound_example();

    // === 9. CONST VARIABLE ===
    const int MAX = 100;
    printf("const MAX: %d\n", MAX);

    return 0;
}
