#include <stdio.h>

int main() {
    unsigned int H, M, B, E; 
    double J, K, now, dep;

    scanf("%d %d", &H, &M);
    now = (H * 60.00) + M;
    
    scanf(" %d %d", &B, &E);
    dep = (B * 60.00) + E;

    scanf(" %d %d", &J, &K);

    now += ((J / K) * 60.00);
    
    if (now <= dep) printf("BERANGKAT!");
    else printf("KETINGGALAN!");
}