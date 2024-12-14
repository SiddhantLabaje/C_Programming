#include <stdio.h>

int main() {
    int a = 10, b = 5, c;
    
    c = a + b;
    printf("a + b = %d\n", c);
    c = a - b;
    printf("a - b = %d\n", c);
    c = a * b;
    printf("a * b = %d\n", c);
    c = a / b;
    printf("a / b = %d\n", c);
    c = a % b;
    printf("a %% b = %d\n", c);

    printf("a++ = %d\n", a++);
    printf("++a = %d\n", ++a);
    printf("b-- = %d\n", b--);
    printf("--b = %d\n", --b);

    c = 5;
    c += 3;
    printf("c += 3 = %d\n", c);
    c -= 3;
    printf("c -= 3 = %d\n", c);
    c *= 3;
    printf("c *= 3 = %d\n", c);
    c /= 3;
    printf("c /= 3 = %d\n", c);
    c %= 3;
    printf("c %%= 3 = %d\n", c);

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);

    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);

    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a << 2: %d\n", a << 2);
    printf("a >> 2: %d\n", a >> 2);

    c = (a = 5, b = 10, a + b);
    printf("Comma operator result: %d\n", c);

    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of a: %zu\n", sizeof(a));

    c = (a > b) ? a : b;
    printf("Conditional operator result: %d\n", c);

    return 0;
}

