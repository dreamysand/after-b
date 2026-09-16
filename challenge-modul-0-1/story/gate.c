#include <stdio.h>

int main() {
    char E;
    int P, K;

    scanf("%c %d %d", &E, &P, &K);

    switch (E) {
        case 'F':
            if (P <= 70 || !((P > 40) && (K % 2 == 0))) break;
            printf("GERBANG TERBUKA");
            return 0;
        case 'W':
            if (P < 60 && !(K % 3 == 0)) break;
            printf("GERBANG TERBUKA");
            return 0;
        case 'E':
            if (P < 80) break;
            printf("GERBANG TERBUKA");
            return 0;
        case 'A':
            if (P < 50 && !(K % 5 == 0)) break;
            printf("GERBANG TERBUKA");
            return 0;
        default:
            return 0;
    }

    printf("GERBANG TERTUTUP");
}