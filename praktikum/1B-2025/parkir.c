#include <stdio.h>

int main() {
    unsigned int DD, hh, mm, in, out, total;
    char type, opt;

    scanf("%d %d:%d", &DD, &hh, &mm);
    in = (DD * 60 * 24) + (hh * 60) + mm;

    scanf(" %d %d:%d", &DD, &hh, &mm);
    out = (DD * 60 * 24) + (hh * 60) + mm;
    
    scanf(" %c", &type);
    scanf(" %c", &opt);
    
    if (
        ((type != 'M') && (type != 'S')) || 
        ((opt != 'a') && (opt != 'b') && (opt != 'c')) ||
        (out < in)
    ) {
        printf("Tidak mungkin");
        return 0;
    }
    
    DD = (out - in) / (24 * 60);
    hh = ((out - in) % (24 * 60)) / 60;
    mm = ((out - in) % (24 * 60)) % 60;

    if (type == 'M') {
        if ((out - in) <= 180) {
            total = 10000;
        } else {
            total = 10000 + (150000 * DD);

            if (mm > 0) hh += 1;

            if ((hh > 3)) {
                total += (hh - 3) * 2000;
            }
        }
    } else {
        if (DD < 1) {
            total = 3000;
        } else {
            total = (50000 * DD);
        }
    }

    switch (opt) {
        case 'a':
            break;
        case 'b':
            total -= (((total * 20) / 100) <= 10000) ? ((total * 20) / 100) : 10000;
            break;
        case 'c':
            total -= (((total * 10) / 100) <= 20000) ? ((total * 10) / 100) : 20000;
            break;
    }

    printf("Anda telah berada di sini selama %d hari, %d jam, dan %d menit. Anda harus membayar sebesar %d rupiah", DD, hh, mm, total);
}