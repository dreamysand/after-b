#include <stdio.h>

int main() {
    int A, B, C, P, K;

    scanf("%d %d %d %d %d", &A, &B, &C, &P, &K);

    int score = (A <= B && A <= C) ? B + C : (B <= A && B <= C) ? A + C : A + B;

    if ((A == B && B != C) || (B == C && C != A) || (C == A && A != B)) score -= P;
    else if (A == B && B == C) score += K;
    
    if (score >= 21) printf("SCORE: %d\nWIN", score);
    else printf("SCORE: %d\nLOSE", score);
}