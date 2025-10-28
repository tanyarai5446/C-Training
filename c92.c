//bitwise operators in c
#include <stdio.h>

int main() {
    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", a & b);   // AND → 0001 = 1
    printf("a | b = %d\n", a | b);   // OR  → 0111 = 7
    printf("a ^ b = %d\n", a ^ b);   // XOR → 0110 = 6
    printf("~a = %d\n", ~a);         // NOT → 1010 (in 2's complement, ~5 = -6)
    printf("a << 1 = %d\n", a << 1); // Left shift → 1010 = 10
    printf("a >> 1 = %d\n", a >> 1); // Right shift → 0010 = 2

    return 0;
}