#include <stdio.h>
#define SAME_COL(x,y) (x -y) / 2

int main() {
    unsigned int M, B, beda_warna, sama_warna;

    scanf("%d %d", &M, &B);

    beda_warna = (M <= B) ? M : B;
    sama_warna = (M <= B) ? SAME_COL(B, M) : SAME_COL(M, B);

    printf("%d %d", beda_warna, sama_warna);
}