#include <stdio.h>
#define TIME(s,v) (s / v)

int main() {
    float D, Va, Sa, Vb, Sb;

    scanf("%f %f %f %f %f", &D, &Va, &Sa, &Vb, &Sb);

    if (
        (D > (Sb * 10) && D <= (Sa * 10)) ||
        ((D <= (Sb * 10) && D <= (Sa * 10)) && (TIME(D, Vb) > TIME(D, Va))) ||
        ((D > (Sb * 10) && D > (Sa * 10)) && ((Sa * 10) > (Sb * 10)))
    ) {
        printf("CHOCOBO A");
    } else if (
        (D > (Sa * 10) && D <= (Sb * 10)) ||
        ((D <= (Sa * 10) && D <= (Sb * 10)) && (TIME(D, Va) > TIME(D, Vb))) ||
        ((D > (Sa * 10) && D > (Sb * 10)) && ((Sb * 10) > (Sa * 10)))
    ) {
        printf("CHOCOBO B"); 
    } else {
        printf("DRAW");
    }
}