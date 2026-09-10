#include <stdio.h>

int main() {
    int limit;

    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        int number = i+1;
        if ((number % 2) == 0) {
            printf("* ");
        } else {
            printf("%d ", number);
        }
    }
    return 0;
}