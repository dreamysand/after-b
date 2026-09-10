#include <stdio.h>

int main() {
    // Soal 3 — Genap atau Ganjil
    // Buatlah program yang menerima sebuah bilangan bulat. Tentukan apakah bilangan tersebut merupakan bilangan genap atau ganjil.
    // Sample Input
    // 18
    // Sample Output
    // Bilangan Genap
    
    int number;

    scanf("%d", &number);

    if ((number % 2) > 0) {
        printf("Bilangan Ganjil");
    } else {
        printf("Bilangan Genap");
    }
}