#include <stdio.h>

int main() {
    int birthYear, currentYear, age;

    scanf("%d %d", &birthYear, &currentYear);
    age = currentYear - birthYear;

    printf("Rosy lahir tahun: %d, dan sekarang tahun  %d, maka umur Rosy adalah: %d\n", birthYear, currentYear, age);
    return 0;
}