#include <stdio.h>

int main() {
    int a = 10;
    switch (a) {
        case 5:
            printf("a sama dengan 5\n");
            break;
        case 10:
            printf("a sama dengan 10\n");
            break;
        default:
            printf("a tidak sama dengan 5 atau 10\n");
            break;
    }
}