#include <stdio.h>

int main() {
    // Soal 2 — Bilangan Positif, Negatif, atau Nol
    // Buatlah program yang menerima sebuah bilangan bulat. Program harus menentukan apakah bilangan tersebut merupakan:
    // Bilangan positif
    // Bilangan negatif
    // Nol
    // Sample Input 1
    // 25
    // Sample Output 1
    // Bilangan Positif
    // Sample Input 2
    // -7
    // Sample Output 2
    // Bilangan Negatif
    // Sample Input 3
    // 0
    // Sample Output 3
    // Bilangan Nol

    int number;

    scanf("%d", &number);

    if (number > 0) {
        printf("Bilangan positif");
    } else if (number < 0) {
        printf("Bilangan negatif");
    } else {
        printf("Bilangan Nol");
    }
}