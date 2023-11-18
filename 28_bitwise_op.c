#include <stdio.h>

int main()
{
    int a = 5; // 0101
    int b = 9; // 1001

    printf("a = %d, b = %d\n", a, b);

    // Biwise AND
    printf("a & b = %d\n", a & b); // 0001

    // Biwise OR
    printf("a | b = %d\n", a | b); // 1101

    // Biwise XOR
    printf("a ^ b = %d\n", a ^ b); // 1100

    // Biwise NOT
    printf("~a = %d\n", ~a); // 1010

    // Biwise LEFT SHIFT
    printf("b << 1 = %d\n", b << 1); // 10010

    // Biwise RIGHT SHIFT
    printf("b >> 1 = %d\n", b >> 1); // 0100

    return 0;
}