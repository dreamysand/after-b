#include <stdio.h>
#include <math.h>

int main() {
    // Iel adalah seorang robot yang ingin bertemu dengan teman robotnya, Dan. Sistem
    // visionnya Iel sedang rusak, jadi Iel hanya memiliki data koordinat dan arah dia sekarang, dan
    // koordinat Dan. Iel dapat melakukan operasi-operasi berikut:
    // - Jika arah Iel belum lurus ke koordinat Dan, maka Iel akan menyatakan
    // “Aku akan berputar ke arah tujuan!”
    // Rumus yang Iel akan gunakan untuk menghitung arah tujuan adalah
    // θ
    // 2 = 𝑎𝑡𝑎𝑛(
    // 𝑦
    // 2−𝑦
    // 1
    // 𝑥
    // 2−𝑥
    // 1
    // )
    // Di kode, dapat menggunakan atan2(y, x) dari library <math.h>. Jika
    // menggunakan compiler gcc dan terdapat error, coba tambahkan argumen -lm
    // seperti ini. Berikut adalah contoh penggunaan fungsinya.
    // Iel akan menganggap arahnya sudah lurus ke koordinat Dan, jika perbedaan
    // arahnya sekarang dan arah tujuan putaran dia kurang dari 0,01.
    // |θ
    // 1 − θ
    // 2
    // | < 10
    // −2
    // - Jika arah Iel sudah lurus ke koordinat Dan, maka Iel akan menyatakan
    // “Aku akan berjalan lurus ke Dan!”
    // - Jika koordinat Iel sama dengan koordinat Dan, maka Iel akan menyatakan
    // “Halo, Dan, aku Iel.”
    // Berdasarkan data-data yang diberikan, pernyataan apa yang harusnya diserukan oleh Iel?
    // Input
    // Akan diberikan 𝑥 secara berurutan. adalah bilangan berkoma dengan presisi 3
    // 1
    // , 𝑦
    // 1
    // , θ
    // 1
    // , 𝑥
    // 2
    // , 𝑦
    // 2
    // θ
    // 1
    // titik di belakang.
    // ● − 109 ≤ 𝑥
    // 1
    // , 𝑦
    // 1
    // , 𝑥
    // 2
    // , 𝑦
    // 2 ≤ 109
    // ● − π ≤ θ
    // 1 ≤ π
    // Output
    // Pernyataan yang dikeluarkan Iel berdasarkan data koordinat yang dia berikan.
    // Sample Input 1
    // 1 2 1.571 2 1
    // Sample Output 1
    // Aku akan berputar ke arah tujuan!
    // Penjelasan 1:
    // Titik merah adalah posisi Iel, titik biru adalah posisi Dan, dan garis hijau representasikan arah
    // Iel. Dapat dilihat bahwa arah Iel masih tidak lurus ke posisi Dan.
    // Sample Input 2
    // 1 2 -0.785 2 1
    // Sample Output 2
    // Aku akan berjalan lurus ke Dan!
    // Penjelasan 2:
    // Arah Iel sudah lurus ke arah Dan, dan jika Iel berjalan lurus, dia akan sampai ke tempat Dan.

    double x1, y1, x2, y2, th1, th2, dif;
    int is_straight = 0;

    scanf("%lf %lf %lf %lf %lf", &x1, &y1, &th1, &x2, &y2);

    if ((x1 == x2) && (y1 == y2)) {
        printf("Halo, Dan, aku Iel.");
        return 0;
    }

    th2 = atan(((y2 - y1) / (x2 - x1)));

    dif = (th2 > th1) ? (th2 - th1) : (th1 - th2);
    
    if (dif < 0.01) {
        printf("Aku akan berjalan lurus ke Dan!");    
    } else {
        printf("Aku akan berputar ke arah tujuan!");
    }
    
}