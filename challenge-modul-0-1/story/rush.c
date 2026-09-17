#include <stdio.h>

int main() {
    char M; 
    int J, V;

    scanf("%c %d %d", &M, &J, &V);

    if (J <= 0 || J > 3) {
        printf("INVALID");
        return 0;
    }
    
    switch (M) {
        case 'E':
            printf("FINAL SPEED: %d", V);
            break;
        case 'N':
            printf("FINAL SPEED: %d", (J == 1) ? V + 20 : (J == 2) ? V + 10 : V);
            break;
        case 'S':
            printf("FINAL SPEED: %d", (J == 1) ? V + 20 : (J == 2) ? V + 10 : V - 15);
            break;
        default:
            printf("INVALID");
            break;
    }
}