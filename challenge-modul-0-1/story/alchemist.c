#include <stdio.h> 

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    
    int min = (A < B && A < C) ? A : (B < A && B < C) ? B : C;
    int max = (A > B && A > C) ? A : (B > A && B > C) ? B : C;
    
    if (
        (((A + B + C) / 3 >= 70) && ((A >= 40) && (B >= 40) && (C >= 40)) && ((max - min) > 50)) ||
        ((A == B) && (B == C))
    ) {
        printf("STABLE");
    } else {
        printf("UNSTABLE");
    }
    
}