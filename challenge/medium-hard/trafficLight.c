#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char color[10];
    char meaning[10];
} Colors;

void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0'; 
            break;
        }
        str[i] = tolower((unsigned char)str[i]);
    }
}

void compareColor(Colors colors[], int size, char color[10]) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(colors[i].color, color) == 0) {
            printf("%s", colors[i].meaning);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Warna tidak valid");
    }
    
}

int main() {
    // Soal 7 — Lampu Lalu Lintas
    // Sebuah robot sedang belajar menyeberang jalan. Robot akan menentukan tindakannya berdasarkan warna lampu lalu lintas:
    // merah → Berhenti
    // kuning → Bersiap
    // hijau → Jalan
    // Buatlah program yang menerima input berupa warna lampu lalu lintas dan menampilkan tindakan yang harus dilakukan robot.
    // Jika warna yang dimasukkan bukan merah, kuning, atau hijau, tampilkan:
    // Warna Tidak Valid
    // Sample Input
    // hijau
    // Sample Output
    // Jalan

    Colors colors[] = {
        {"merah", "Berhenti"},
        {"kuning", "Bersiap"},
        {"hijau", "Jalan"},
    }; 

    char input_color[10];
    int size = sizeof(colors) / sizeof(colors[0]);

    do {
        fgets(input_color, sizeof(input_color), stdin);

        if (strlen(input_color) > 11) {
            printf("Input tidak boleh melebihi 10 karakter\n");
        }
    } while (strlen(input_color) > 11);

    toLowerCase(input_color);

    compareColor(colors, size, input_color);
}