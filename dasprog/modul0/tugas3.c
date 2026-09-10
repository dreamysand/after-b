#include <stdio.h>

int main() {
    #define Sn(n,a,d) ((n)*(2*(a)+((n)-1)*(d))/2)

    long long N;

    scanf("%lld", &N);

    long long n3 = N/3;
    long long n5 = N/5;
    long long n15 = N/15;

    long long sum3 = Sn(n3, 3, 3);
    long long sum5 = Sn(n5, 5, 5);
    long long sum15 = Sn(n15, 15, 15);

    long long total = sum3 + sum5 - sum15;
    printf("%lld", total);
}