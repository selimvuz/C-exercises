/*
Write a program in C to show the basic declaration of a pointer.

Expected Output:

Here is m = 10, n and o are two integer variable and *z is an integer
z stores the address of m  = 0x7ffd40630d44
*z stores the value of m = 10
&m is the address of m = 0x7ffd40630d44
&n stores the address of n = 0x7ffd40630d48
&o  stores the address of o = 0x7ffd40630d4c
&z stores the address of z = 0x7ffd40630d50
Increment the address of z by 1
*/

#include <stdio.h>

int main()
{
    int m = 10;
    int n, o;
    int *z = &m; // Pointer z initialized to the address of m

    printf("Here is m = %d, n and o are two integer variables and *z is an integer\n\n", m);
    printf("z stores the address of m  = %p\n\n", (void *)z);
    printf("*z stores the value of m = %d\n\n", *z);
    printf("&m is the address of m = %p\n\n", (void *)&m);
    printf("&n stores the address of n = %p\n\n", (void *)&n);
    printf("&o stores the address of o = %p\n\n", (void *)&o);
    printf("&z stores the address of z = %p\n", (void *)&z);
    printf("Increment pointer by 1: %p", (void *)(z + 1));

    return 0;
}