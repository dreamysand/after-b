#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if ((A + B + C) == (3 * A)) {
        printf("PARADOX");
    } else if ((
        (A == B && B != C) || 
        (B == C && C != A) || 
        (A == C && A != B)
    )) {
        printf((A == B && B != C) ? "C WINS" : (B == C && C != A) ? "A WINS" : "B WINS");
    } else {
        if (((A + B + C) % 2) == 0) {
            printf((A > B && A > C) ? "A WINS" : (B > A && B > C) ? "B WINS" : "C WINS");
        } else {
            printf((A < B && A < C) ? "A WINS" : (B < A && B < C) ? "B WINS" : "C WINS");
        }
    }
}