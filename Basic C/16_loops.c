#include <stdio.h>

int main()
{
    // while loop
    int index = 1;

    printf("While loop:\n");

    while (index <= 5)
    {
        printf("%d  ", index);
        index++;
    }

    printf("\n\n");
    printf("For loop:\n");

    // for loop
    for (int i = 1; i <= 5; i++)
    {
        printf("%d  ", i);
    }

    printf("\n\n");
    printf("Do-while loop:\n");

    // do-while loop
    int i = 1;

    do
    {
        printf("%d  ", i);
        i++;
    } while (i <= 5);

    return 0;
}