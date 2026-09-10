#include <stdio.h>

int main() {
    int H,M,S;

    scanf("%d", &S);

    H = S / 3600;
    M = (S % 3600) / 60;
    S = S % 60;

    printf("%d jam %d menit %d detik", H, M, S);
}