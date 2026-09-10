#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);
    
    if ((number % 2) == 0) {
        printf("Genap");
    } else {
        printf("Ganjil");
    }
    return 0;
}