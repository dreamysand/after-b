#include <stdio.h>

int main() {
    // Soal 15 — Kembalian Minimarket
    // Dina membeli sebuah barang dengan harga tertentu dan membayar menggunakan uang tunai.
    // Buatlah program yang menerima:
    // Harga barang
    // Uang yang diberikan
    // Program menentukan jumlah uang kembalian yang harus diberikan.
    // Jika uang yang diberikan kurang dari harga barang, tampilkan:
    // Uang Tidak Cukup
    // Jika uang yang diberikan tepat sama dengan harga barang:
    // Uang Pas
    // Sample Input
    // 35000
    // 50000
    // Sample Output
    // Kembalian: Rp15000

    int money, price;

    do
    {
        if(scanf("%d", &price) < 0 || price < 0) break;
        if(scanf("%d", &money) < 0 || money < 0) break;

        if (money < price)
        {
            printf("Uang tidak cukup");
        } else if (money == price)
        {
            printf("Uang pas");
        } else {
            printf("Kembalian: Rp%d", (money - price));
        }
        
    } while (money < price);
    
    
}