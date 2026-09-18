#include <stdio.h>

int main() {
    int V, D, C; 

    scanf("%d %d %d", &V, &D, &C);

    if (V + D < 100 || V + C < 100 || D + C < 100) {
        printf("FAILED");
        return 0;
    }
    
    int final_score;

    if ((V < D) && V < C) {
        final_score = (V + D + C) - 10;
    } else if ((V >= 80) && (D >= 80) && (C >= 80)) {
        final_score = (V + D + C) + 15;
    } else {
        final_score = V + D + C;
    }
    
    if ((final_score / 3) >= 85) {
        printf("EXCELLENT");
    } else if ((final_score / 3) >= 70 && (final_score / 3) < 85) {
        printf("GOOD");
    } else {
        printf("NEEDS PRACTICE");
    }
}