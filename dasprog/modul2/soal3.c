#include <stdio.h>
#include <math.h>

int checkPrime(int number) {
    if (number <= 1) return 0;

    if (number == 2) return 1;

    if  (number % 2 == 0) return 0;

    int upperLimit = (int)sqrt(number);

    for (int i = 3; i < upperLimit; i+=2)
    {
        if (number % i == 0) return 0;
    }

    return 1;
    
}

int main() {
    int limit;

    scanf("%d", &limit);

    for (int i = 0; i < limit; i++)
    {
        int number = i+1;

        if (checkPrime(number)) {
            printf("* ");
        } else {
            printf("%d ", number);
        }
    }
    
}