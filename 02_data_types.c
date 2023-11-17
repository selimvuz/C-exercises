#include <stdio.h>
#include <stdbool.h> // bool: true or false

int main()
{
    int x = 5;      // int: 4 bytes
    float y = 5.5;  // float: 4 bytes
    double w = 5.2; // double: 8 bytes
    char z = 'a';   // char: 1 byte
    bool t = true;  // bool: 1 byte

    unsigned int a = 5; // unsigned: only positive numbers

    // unsigned int: 0 to 4,294,967,295 - signed int: -2,147,483,648 to 2,147,483,647
    // unsigned char: 0 to 255 - signed char: -128 to 127
    // unsigned short: 0 to 65,535 - signed short: -32,768 to 32,767
    // unsigned long: 0 to 4,294,967,295 - signed long: -2,147,483,648 to 2,147,483,647
    // unsigned long long: 0 to 18,446,744,073,709,551,615 - signed long long: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    // Format specifiers
    printf("x = %d\n", x);      // %d: integer
    printf("y = %8.2f\n", y);   // %.2f: float with 2 decimal places
    printf("w = %-8.1lf\n", w); // %lf: double
    // %8.1lf: double with 1 decimal place and 8 digits before decimal point
    // %-8.1lf: left aligned with '-'
    printf("z = %c\n", z); // %c: character
    printf("t = %d\n", t); // %d: integer
    printf("a = %u\n", a); // %u: unsigned integer

    // C is not oop, so we can't use string as a data type
    // Unsized arrays only work with initialization
    // char name[]; // Error
    // This way, size is automatically calculated
    char name[] = "John"; // String: array of characters

    printf("Name = %s\n", name); // %s: string

    return 0;
}