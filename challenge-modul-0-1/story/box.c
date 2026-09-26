#include <stdio.h>
#include <math.h>

int main() {
    float X1, X2, Y1, Y2, XP, YP, DX, DY, D;

    scanf("%f %f %f %f %f %f", &X1, &Y1, &X2, &Y2, &XP, &YP);

    if ((XP < X1 && YP < Y1) || (XP < X2 && YP < Y2)) {
        printf("%.2f", 0.00);
        return 0;
    }

    DX = (XP - X1) <= 0 || (XP - Y2) <= 0 ? 0 : (XP - fmax(X1, X2)); 
    DY = (YP - Y1) <= 0 || (YP - Y2) <= 0 ? 0 : (YP - fmax(Y1, Y2));
    
    D = sqrt(pow(DX, 2) + pow(DY, 2));
    printf("%.2f", D); 
}