#include <limits.h>
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\n--- Arithmetic Operators ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    if (b == 0) {
        printf("Division and modulus by zero are not allowed.\n");
    } else if (a == INT_MIN && b == -1) {
        printf("a / b and a %% b are undefined for INT_MIN and -1 in C.\n");
    } else {
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b);
    }

    printf("\n--- Relational Operators ---\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    printf("\n--- Logical Operators ---\n");
    printf("(a > 0 && b > 0) : %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b > 0) : %d\n", (a > 0 || b > 0));
    printf("!(a > 0)         : %d\n", !(a > 0));

    printf("\n--- Bitwise Operators ---\n");
    printf("a & b  = %d\n", a & b);
    printf("a | b  = %d\n", a | b);
    printf("a ^ b  = %d\n", a ^ b);
    printf("~a     = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    printf("\n--- Ternary Operator ---\n");
    printf("Larger number is: %d\n", (a > b) ? a : b);

    return 0;
}
