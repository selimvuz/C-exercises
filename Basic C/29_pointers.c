#include <stdio.h>

int main()
{
    // integer
    int age = 20; // 4 bytes

    // pointer to integer
    int *pAge = &age; // 8 bytes

    // pointer to pointer to integer
    int **ppAge = &pAge;

    printf("age = %d\n", age);
    printf("&age = %p\n", &age);

    printf("pAge = %p\n", pAge);
    printf("*pAge = %d\n", *pAge);

    printf("ppAge = %p\n", ppAge);
    printf("*ppAge = %p\n", *ppAge);
    printf("**ppAge = %d\n", **ppAge);

    return 0;
}