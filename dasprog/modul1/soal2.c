#include <stdio.h>
#include <stdlib.h>

void spellNumber(int number) {
    char *ones[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};

    if (number == 0) {
        printf("Nol");
    } else if (number < 12) {
        printf("%s", ones[number]);
    } else if (number < 20) {
        spellNumber(number - 10);
        printf(" Belas");
    } else if (number < 100) {
        div_t lessThanHundred = div(number, 10);
        spellNumber(lessThanHundred.quot);
        printf(" Puluh");
        if (lessThanHundred.rem != 0) {
            printf(" ");
            spellNumber(lessThanHundred.rem);
        }
    } else if (number < 200) {
        printf("Seratus ");
        if ((number % 100) != 0)
        {
            printf(" ");
            spellNumber(number % 100);
        }
    } else if (number < 1000) {
        div_t lessThanThousand = div(number, 100);
        spellNumber(lessThanThousand.quot);
        printf(" Ratus");
        if (lessThanThousand.rem != 0) {
            printf(" ");
            spellNumber(lessThanThousand.rem);
        }
    }
}

int main() {
    const int MIN = 0;
    const int MAX = 999;

    int number;

    do {
        scanf("%d", &number);

        if (number > MAX || number < MIN) {
            printf("Angka yang dimasukkan haruslah dalam range %d sampai %d\n", MIN, MAX);
        }
    } while (number > MAX || number < MIN);

    spellNumber(number);
    return 0;
}