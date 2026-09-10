#include <stdio.h>
#include <math.h>

int main() {
    // Soal 9 — Tiga Bilangan
    // Diberikan tiga bilangan bulat A, B, dan C.
    // Buatlah program yang menentukan bilangan terbesar dari ketiga bilangan tersebut.
    // Jika terdapat beberapa bilangan yang memiliki nilai terbesar yang sama, tetap tampilkan nilai terbesar tersebut.
    // Sample Input
    // 15
    // 27
    // 19
    // Sample Output
    // Bilangan terbesar: 27

    int A, B, C, max;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    max = (int)fmax(A, fmax(B, C));
    printf("Bilangan terbesar: %d", max);
}