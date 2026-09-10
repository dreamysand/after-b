#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("=== ARITHMETIC ===\n");
    printf("a + b  = %d\n", a + b);    // 13
    printf("a - b  = %d\n", a - b);    // 7
    printf("a * b  = %d\n", a * b);    // 30
    printf("a / b  = %d\n", a / b);    // 3 (integer division)
    printf("a %% b  = %d\n", a % b);   // 1 (sisa bagi)
    printf("a++    = %d (then a becomes %d)\n", a++, a);  // post-increment
    printf("++b    = %d (b becomes %d)\n", ++b, b);        // pre-increment
    printf("a--    = %d (then a becomes %d)\n", a--, a);
    printf("-a     = %d\n", -a);        // negasi

    printf("\n=== COMPARISON ===\n");
    printf("a == b : %d\n", a == b);   // 0 (false)
    printf("a != b : %d\n", a != b);   // 1 (true)
    printf("a >  b : %d\n", a >  b);   // 1
    printf("a <  b : %d\n", a <  b);   // 0
    printf("a >= b : %d\n", a >= b);   // 1
    printf("a <= b : %d\n", a <= b);   // 0

    printf("\n=== LOGICAL ===\n");
    int x = 1, y = 0;
    printf("x && y : %d\n", x && y);   // 0 (kedua harus true)
    printf("x || y : %d\n", x || y);   // 1 (cuma 1 yg true)
    printf("!x     : %d\n", !x);       // 0 (negasi)
    printf("!y     : %d\n", !y);       // 1

    printf("\n=== ASSIGNMENT ===\n");
    int c = 10;
    printf("c = %d\n", c);             // 10
    c += 5;  printf("c += 5 => %d\n", c);  // 15
    c -= 3;  printf("c -= 3 => %d\n", c);  // 12
    c *= 2;  printf("c *= 2 => %d\n", c);  // 24
    c /= 4;  printf("c /= 4 => %d\n", c);  // 6
    c %= 4;  printf("c %%= 4 => %d\n", c); // 2

    printf("\n=== BITWISE ===\n");
    int p = 5, q = 3;  // 5 = 101, 3 = 011 (binary)
    printf("p & q  = %d\n", p & q);   // 1  (001)
    printf("p | q  = %d\n", p | q);   // 7  (111)
    printf("p ^ q  = %d\n", p ^ q);   // 6  (110)
    printf("~p     = %d\n", ~p);      // -6 (two's complement)
    printf("p << 1 = %d\n", p << 1);  // 10 (1010) *2
    printf("q >> 1 = %d\n", q >> 1);  // 1  (001)  /2

    printf("\n=== MISC ===\n");
    printf("sizeof(int)   = %zu\n", sizeof(int));          // biasanya 4
    printf("sizeof(char)  = %zu\n", sizeof(char));         // 1
    printf("ternary (a>b?1:0) = %d\n", a > b ? 1 : 0);     // 1
    printf("comma: (1,2,3) = %d\n", (1, 2, 3));            // 3 (nilai terakhir)

    return 0;
}
