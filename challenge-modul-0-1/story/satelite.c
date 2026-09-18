#include <stdio.h>

int main() {
    float X, Y, Z;

    scanf("%f %f %f", &X, &Y, &Z);

    if ((X * Y == 0) || (Y * Z == 0)) {
        printf("BOUNDARY");
        return 0;
    }

    if (X + Y + Z > 0) {
        printf("SECTOR A");
    } else if (X + Y + Z < 0) {
        printf("SECTOR B");
    } else if ((X * Y > 0) && (X * Z < 0)) {
        printf("SECTOR C");
    } else if ((X * Y < 0)) {
        printf("SECTOR D");
    } 
    
}