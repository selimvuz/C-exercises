#include <stdio.h>

int main()
{
    int x = 5;
    int y = 2;

    int z = x / y; // Division
    printf("z = %d\n", z);

    float w = x / (float)y; // Division
    printf("w = %.2f\n", w);

    // To get the correct result, we need to cast the variable y to float
    // Or you can use float instead of int when declaring the variable

    int a = x % y; // Modulus
    a++;           // Increment
    printf("a = %d\n", a);
    a--; // Decrement
    printf("a = %d\n", a);

    // Augmented assignment operator
    a += 2; // a = a + 2
    printf("a = %d\n", a);
    a *= 3; // a = a * 3
    printf("a = %d\n", a);

    return 0;
}