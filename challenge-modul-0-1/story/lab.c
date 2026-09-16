#include <stdio.h>

int main() {
    char T, R;
    unsigned int K;
    
    scanf("%c %d %c", &T, &K, &R);

    switch (R) {
        case 'A':
            if ((T == 'R') && ((K % 2) > 0) || (T == 'G')) break;
            printf("ACCESS GRANTED");
            return 0;
        case 'B':
            if ((T == 'G') && ((K % 5) > 0)) break;
            printf("ACCESS GRANTED");
            return 0;
        case 'G':
            if (T != 'A') break;
            printf("ACCESS GRANTED");
            return 0;
        default:
            return 0;
    }

    printf("ACCESS DENIED");
}