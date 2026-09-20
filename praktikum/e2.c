#include <stdio.h>
#define IS_LOWERCASE(a) ((a) >= 'a' && (a) <= 'z')
#define IS_UPPERCASE(a) ((a) >= 'A' && (a) <= 'Z')

int main() {
    char a, b, op;

    scanf("%c %c %c", &a, &op, &b);

    int n1 = 0, n2 = 0;

    if (IS_LOWERCASE(a)) {
        n1 = a - 97 + 1;
    } else if (IS_UPPERCASE(a)){
        n1 = a - 65 + 27;
    } else {
        return 0;
    }

    if (IS_LOWERCASE(b)) {
        n2 = b - 97 + 1;
    } else if (IS_UPPERCASE(b)){
        n2 = b - 65 + 27;
    } else {
        return 0;
    }

    int result = 0;

    switch (op) {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        if (n2 == 0) return 0;
        result = n1 / n2;
        break;
    case '%':
        if (n2 == 0) return 0;
        result = n1 % n2;
        break;
    default:
        return 0;
    }

    result = (result - 1) % 52;
    if (result < 0) {
        result += 52;
    }
    result += 1;

    int final_answer = 0;

    if (IS_LOWERCASE((result + 97 - 1))) {
        final_answer = (result + 97 - 1);
    } else if (IS_UPPERCASE((result + 65 - 27))) {
        final_answer = (result + 65 - 27);
    } else {
        return 0;
    }

    printf("%c", final_answer);
}
