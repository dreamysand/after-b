#include <stdio.h>
#include <stdlib.h>

int main() {
    char pos1[3], pos2[3];

    scanf("%s %s", pos1, pos2);

    int dx = abs(pos1[0] - pos2[0]);
    int dy = abs(pos1[1] - pos2[1]);

    if (dx == 0 && dy == 0)
    {
        printf("TIDAK ADA");
        return 0;
    }
    
    int horse = 0, rook = 0, elephant = 0, queen = 0;
    
    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        horse = 1;
    }

    if ((dx == 0 && dy > 0) || (dx > 0 && dy == 0))
    {
        rook = 1;
    }

    if (dx == dy && dx > 0) {
        elephant = 1;
    }

    if (rook || elephant)
    {
        queen = 1;
    }

    int printed = 0;

    if (horse) {
        printf("KUDA");
        printed = 1;
    }
    if (rook) {
        if (printed) printf(" ");
        printf("BENTENG");
        printed = 1;
    }
    if (elephant) {
        if (printed) printf(" ");
        printf("GAJAH");
        printed = 1;
    }
    if (queen) {
        if (printed) printf(" ");
        printf("RATU");
        printed = 1;
    }

    if (!printed) {
        printf("TIDAK ADA");
    }
}