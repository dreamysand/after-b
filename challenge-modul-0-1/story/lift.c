#include <stdio.h>

int main() {
    int N, X, V;

    scanf("%d %d %d", &N, &X, &V);

    if ((X > N) || (((X % 2) == 0) && X > 20) || (((X % 7) == 0) && !V)) {
        printf("DITOLAK");
        return 0;
    } 

    printf("NAIK");
}