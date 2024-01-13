/*
Write a program in C to demonstrate how to handle pointers in a program.
Expected Output :

Address of m : 0x7ffcc3ad291c
Value of m : 29

Now ab is assigned with the address of m.
Address of pointer ab : 0x7ffcc3ad291c
Content of pointer ab : 29

The value of m assigned to 34 now.
Address of pointer ab : 0x7ffcc3ad291c
Content of pointer ab : 34

The pointer variable ab is assigned with the value 7 now.
Address of m : 0x7ffcc3ad291c
Value of m : 7
*/

#include <stdio.h>

int main()
{
    int m = 29;
    int *ab = &m;

    printf("Address of m: %p\n", (void *)&m);
    printf("Value of m: %d\n", m);

    m = 34;
    printf("Address of pointer ab: %p\n", (void *)ab);
    printf("Content of pointer ab: %d\n", *ab);

    m = 7;
    printf("Address of pointer ab: %p\n", (void *)ab);
    printf("Content of pointer ab: %d\n", *ab);

    return 0;
}