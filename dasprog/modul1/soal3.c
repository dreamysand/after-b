#include <stdio.h>

int getSeg(int map[][7], int rows, int row, int col) {
    if (rows > 0 && 
        row >=0 && 
        row < rows &&
        col >= 0 && 
        col < 7) 
    {
        return map[row][col];
    }
    return 0;
}

void sevenSegmentDecoder(int i1, int i2, int i3, int i4) {
    int segmentsMap[10][7] = {
        {1,1,1,1,1,1,0}, 
        {0,1,1,0,0,0,0}, 
        {1,1,0,1,1,0,1}, 
        {1,1,1,1,0,1,1}, 
        {0,1,1,0,0,1,1}, 
        {1,0,1,1,0,1,1}, 
        {1,0,1,1,1,1,1}, 
        {1,1,1,0,0,0,0}, 
        {1,1,1,1,1,1,1}, 
        {1,1,1,1,0,1,1},  
    };
    
    int decimalValue = (i1 * 8) + (i2 * 4) + (i3 * 2) + (i4 * 1);

    for (int i = 0; i < 7; i++)
    {
        printf("%d ", getSeg(segmentsMap, 10, decimalValue, i));
    }
    
}

int main() {
    int i1, i2, i3, i4;

    do { 
        scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

        if ((i1 != 0 && i1 != 1) ||
            (i2 != 0 && i2 != 1) ||
            (i3 != 0 && i3 != 1) ||
            (i4 != 0 && i4 != 1)) 
        {
            printf("Hanya bisa 0 dan 1\n");
        }
    } while ((i1 != 0 && i1 != 1) ||
            (i2 != 0 && i2 != 1) ||
            (i3 != 0 && i3 != 1) ||
            (i4 != 0 && i4 != 1));

    sevenSegmentDecoder(i1, i2, i3, i4);
}