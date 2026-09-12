#include <stdio.h>

int isLeapYear(int T) {
    if (((T % 400) == 0) || ((T % 4) == 0) && ((T % 100) > 0)) return 1;
    return 0;
}

int isValidDate(int H, int B, int T) {
    if (B <=0 || B > 12)
    {
        printf("TIDAK VALID");
        return 0;
    }
    
    int maxH;
    if (B == 2)
    {
        maxH = isLeapYear(T) ? 29 : 28;
    } else if(B == 4 || B == 6 || B == 9 || B == 11) {
        maxH = 30;
    } else {
        maxH = 31;
    }

    if (H <= 0 || H > maxH)
    {
        printf("TIDAK VALID");
        return 0;
    }
    
    printf("VALID");
}

int main() {
    int H, B, T, is_jump_year;

    scanf("%d %d %d", &H, &B, &T);
    
    isValidDate(H, B, T);
}