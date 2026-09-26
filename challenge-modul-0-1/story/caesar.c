#include <stdio.h>
#define IS_LOWERCASE(a) ((a) >= 'a' && (a) <= 'z')
#define IS_UPPERCASE(a) ((a) >= 'A' && (a) <= 'Z')
#define IS_NUMBER(a) ((a) >= '0' && (a) <= '9')

int main() {
    char C;
    int K;

    scanf("%c %d", &C, &K);

    int n1 = 0;

    if (IS_LOWERCASE(C)) {
        n1 = C - 97 + 1;
    } else if (IS_UPPERCASE(C)){
        n1 = C - 65 + 27;
    } else if (IS_NUMBER(C)) {
        n1 = C - 48;
    } else {
        return 0;
    }

    int result = 0;

    result = n1 + K;

    int final_answer = 0;
    
    if (IS_LOWERCASE(C) || IS_UPPERCASE(C)) {
        result = (result - 1) % 52;
        if (result < 0) {
            result += 52;
        }
        result += 1;

        if (IS_LOWERCASE((result + 97 - 1))) {
            final_answer = (result + 97 - 1);
        } else if (IS_UPPERCASE((result + 65 - 27))) {
            final_answer = (result + 65 - 27);
        }
    } else {
        result = result % 10;
        if (result < 0) {
            result += 10;
        }
        final_answer = (result + 48);
    }
    
    printf("%c", final_answer);
}