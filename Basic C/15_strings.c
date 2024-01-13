#include <stdio.h>
#include <string.h> // string functions

int main()
{
    char string1[] = "Yavuz";
    char string2[] = "Lina";
    char string3[] = "Cem";

    // uppercase
    printf("The uppercase of string1 is %s\n", strupr(string1));

    // lowercase
    printf("The lowercase of string2 is %s\n", strlwr(string2));

    // string length
    printf("The length of string1 is %zu\n", strlen(string1));

    // string concatenation
    strcat(string1, string2);
    printf("The concatenated string is %s\n", string1);

    // string comparison
    printf("The result of comparison is %d\n", strcmp(string2, string1));
    printf("The result of comparison is %d\n", strcmp(string3, string3));

    // string copy
    strcpy(string1, string2);
    printf("The copied string is %s\n", string1);

    strncpy(string1, string3, 2);
    printf("The copied string is %s\n", string1);

    return 0;
}