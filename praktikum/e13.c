#include <stdio.h>

int main() {
    char T1, T2;
    int F1, F2;

    scanf("%c %d %c %d", &T1, &F1, &T2, &F2);

    int damage = 0, winner = 0;

    // if (F1 > 30 || F2 > 30 || F1 < 1 || F2 < 1) return 0;

    if (F1 != F2) {
        if (F1 < F2) {
            winner = 1;
            int frames = F2 - F1;
            if (frames >= 5) {
                if (T1 == 'L') {
                    damage = (100 * 150) / 100;
                } else if (T1 == 'M') {
                    damage = (250 * 150) / 100;
                } else if (T1 == 'H') {
                    damage = (450 * 150) / 100;
                }
            } else {
                if (T1 == 'L') {
                    damage = 100;
                } else if (T1 == 'M') {
                    damage = 250;
                } else if (T1 == 'H') {
                    damage = 450;
                }
            }
        } else {
            winner = 2;
            int frames = F1 - F2;
            if (frames >= 5) {
                if (T2 == 'L') {
                    damage = (100 * 150) / 100;
                } else if (T2 == 'M') {
                    damage = (250 * 150) / 100;
                } else if (T2 == 'H') {
                    damage = (450 * 150) / 100;
                }
            } else {
                if (T2 == 'L') {
                    damage = 100;
                } else if (T2 == 'M') {
                    damage = 250;
                } else if (T2 == 'H') {
                    damage = 450;
                }
            }
        }
    } else {
        if (T1 == T2) {
            if (T1 == 'L') {
                damage = 100;
            } else if (T1 == 'M') {
                damage = 250;
            } else if (T1 == 'H') {
                damage = 450;
            }
        } else if (T1 == 'H' && T1 != T2) {
            winner = 1;
            damage = 450;
        } else if (T1 == 'M' && T2 == 'L') {
            winner = 1;
            damage = 250;
        } else if (T2 == 'H' && T1 != T2) {
            winner = 2;
            damage = 450;
        } else if (T2 == 'M' && T1 == 'L') {
            winner = 2;
            damage = 250;
        }
    }

    if (winner == 1) {
        printf("PLAYER 1 %d", damage);
    } else if (winner == 2) {
        printf("PLAYER 2 %d", damage);
    } else {
        printf("TRADE HIT %d", damage);
    }
}
