#include <stdio.h>

int main() {
    int length;

    do
    {
        scanf("%d", &length);

        if (length <= 1) {
            printf("Masukkan angka lebih dari 1\n");
        }
    } while (length <= 1);

    int numbers[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d \n", numbers[i]);
    }

    return 0;
}