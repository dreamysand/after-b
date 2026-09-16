#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A == B && B == C) {
        printf("KETIGANYA");
    } else if (
        (A == B && A != C) ||
        (B == C && B != A) ||
        (C == A && C != B)
    ) {
        printf((A == B && A != C) ? "A DAN B" : (B == C && B != A) ? "B DAN C" : "A DAN C");
    } else {
        if (((A + B + C) % 2 == 0)) {
            printf(((A > B) && (A > C)) ? "A" : ((B > A) && (B > C)) ? "B" : "C");
        } else {
            printf(((A < B) && (A < C)) ? "A" : ((B < A) && (B < C)) ? "B" : "C");
        }
    }
    
}