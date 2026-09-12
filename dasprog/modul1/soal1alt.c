#include <stdio.h>
#define POWER_3(x) (x*x*x)

int main() {
    const int MIN = 0;
    const int MAX = 999;

    int theNumber, numberCopy, digit, total;
    
    total = 0;

    do {
        scanf("%d", &theNumber);

        if (theNumber < MIN || theNumber > MAX) {
            printf("Angka yang dimasukkan haruslah dalam range %d sampai %d\n", MIN, MAX);
        }
    } while (theNumber < MIN || theNumber > MAX);

    numberCopy = theNumber;
    
    while (numberCopy > 0)
    {
        digit = numberCopy % 10;
        total += POWER_3(digit);
        numberCopy /= 10;
    }

    if (total == theNumber) {
        printf("Merupakan Bilangan Armstrong\n");
    } else {
        printf("Bukan Merupakan Bilangan Armstrong\n");
    }
    
}