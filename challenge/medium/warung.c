#include <stdio.h>


int main() {
    // Soal 5 — Warung Makan
    // Rina sedang makan di sebuah warung. Ia memilih salah satu menu berikut:
    // Kode	Menu	Harga
    // 1	Nasi Goreng	Rp15.000
    // 2	Mie Goreng	Rp13.000
    // 3	Ayam Geprek	Rp18.000
    // 4	Soto Ayam	Rp16.000
    // Buatlah program yang menerima kode menu dan jumlah makanan yang dibeli. Program kemudian menampilkan total harga yang harus dibayar.
    // Jika kode menu yang dimasukkan tidak tersedia, tampilkan:
    // Menu Tidak Tersedia
    // Sample Input
    // 3
    // 2
    // Sample Output
    // Total harga: Rp36000
    
    typedef struct {
        char nama[50];
        int harga;
    } Menu;

    int menu_number, quantity;

    Menu menus[4] = {
        {"Nasi Goreng", 15000},
        {"Mie Goreng", 13000},
        {"Ayam Geprek", 18000},
        {"Soto Ayam", 16000},
    };

    printf("Daftar Menu:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s = Rp%d/porsi\n", (i+1), menus[i].nama, menus[i].harga);
    }

    do {
        scanf("%d", &menu_number);

        if (menu_number <= 0 || menu_number > (sizeof(menus) / sizeof(menus[0])))
        {
            printf("Menu Tidak Tersedia");
        }
    } while (menu_number <= 0 || menu_number > (sizeof(menus) / sizeof(menus[0])));
    
    scanf("%d", &quantity);

    printf("Total harga: Rp%d", (menus[menu_number-1].harga * quantity));
}