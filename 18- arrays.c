#include <stdio.h>

int main()
{
    // arrays
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    printf("%d\n", luckyNumbers[0]);

    luckyNumbers[0] = 90;

    // length of an array in C is calculated by dividing the total size of the array by the size of the first element
    int lengthOfArray = sizeof(luckyNumbers) / sizeof(luckyNumbers[0]);
    printf("Length of array: %d\n", lengthOfArray);

    for (int i = 0; i < lengthOfArray; i++)
    {
        printf("%d  ", luckyNumbers[i]);
    }

    return 0;
}