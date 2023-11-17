#include <stdio.h>

int main()
{
    int numbers[3][4] = {
        {1, 24, 65, 42},
        {90, 2, 56, 78},
        {12, 34, 28, 8}};

    int rowLength = sizeof(numbers[0]) / sizeof(numbers[0][0]);
    int columnLength = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < columnLength; i++)
    {
        for (int j = 0; j < rowLength; j++)
            printf("%d  ", numbers[i][j]);

        printf("\n");
    }

    return 0;
}