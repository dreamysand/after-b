#include <stdio.h>

void checkWin(int andi_choice, int budi_choice) {
    if (andi_choice == budi_choice)
    {
        printf("Seri");
    } else if (
        ((andi_choice == 1) && (budi_choice == 2)) ||
        ((andi_choice == 2) && (budi_choice == 3)) ||
        ((andi_choice == 3) && (budi_choice == 1)) 
    ) {
        printf("Andi Menang");
    } else {
        printf("Budi Menang"); 
    }

}

int main() {
    int andi_choice, budi_choice;

    printf("Jankenpon\n1. Batu\n2. Gunting\n3. Kertas\n");
    if (scanf("%d", &andi_choice) <= 0 || andi_choice > 3) return 0;
    if (scanf("%d", &budi_choice) <= 0 || budi_choice > 3) return 0;

    checkWin(andi_choice, budi_choice);
}