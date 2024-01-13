#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20] = "World";
    char temp[20];

    printf("Before swapping:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // swapping
    strcpy(temp, str2);
    strcpy(str2, str1);
    strcpy(str1, temp);

    printf("After swapping:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}