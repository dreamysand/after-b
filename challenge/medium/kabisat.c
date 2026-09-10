#include <stdio.h>

int main() {
    Soal 8 — Tahun Kabisat
    Sebuah tahun disebut tahun kabisat apabila:
    Tahun tersebut habis dibagi 400, atau
    Tahun tersebut habis dibagi 4 tetapi tidak habis dibagi 100.
    Buatlah program yang menerima sebuah tahun dan menentukan apakah tahun tersebut merupakan tahun kabisat.
    Sample Input 1
    2024
    Sample Output 1
    Tahun Kabisat
    Sample Input 2
    1900
    Sample Output 2
    Bukan Tahun Kabisat

    int year;
    
    if(scanf("%d", &year) < 0) return 0;
    
    if (((year % 400) == 0) || ((year % 4) == 0) && ((year % 100) > 0))
    {
        printf("Tahun Kabisat");
    } else {
        printf("Bukan Tahun Kabisat");
    }
    
}