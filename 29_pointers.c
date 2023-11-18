#include <stdio.h>

int main()
{
    int age = 20;
    int *pAge = &age;
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