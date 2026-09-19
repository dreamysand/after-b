#include <stdio.h>

int main() {
    int M, H, G;

    scanf("%d %d %d", &M, &H, &G);

    if ((M >= 70) && (G >= 100) || (H < 30 && G < 500)) {
        printf("CONTRACT REJECTED");
        return 0;
    }

    printf("CONTRACT ACCEPTED");
}