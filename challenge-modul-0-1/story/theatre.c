#include <stdio.h>

int main() {
    int X, A, B, C, K;

    scanf("%d %d %d %d %d", &X, &A, &B, &C, &K);

    int total = ((X / 100) ? A : 0) + (((X % 100) / 10) ? B : 0) + ((X % 10) ? C : 0) + ((X == 111) ? K : 0);
    
    if (total >= 80) {
        printf("GOLD");
    } else if (total >= 50 && total < 80) {
        printf("SILVER");
    } else if (total >= 20 && total < 50) {
        printf("BRONZE");
    } else {
        printf("REJECTED");
    }
    
}