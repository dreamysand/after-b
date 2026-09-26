#include <stdio.h>

int main() {
    int M, N, T;

    scanf("%d %d %d", &M, &N, &T);

    int session = T / 60;
    int left = T % 60;

    int red = session * 20;
    int green = session * 40;
    int time_until_run = (M + 1) * 4;
    int car_total = (M + 1 + N);

    int all_car_time = car_total * 4;

    red += left <= 20 ? left : 20;
    green += left > 20 ? left - 20 : 0;

    if (time_until_run <= green) {
        if (all_car_time <= green) {
            printf("YES! 0");
        } else {
            int left_car = car_total - (green / 4);
            printf("YES! %d", left_car);
        }
    } else {
        int left_car = car_total - (green / 4);
        printf("NO! %d", left_car);
    }
}
