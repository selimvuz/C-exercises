#include <stdio.h>

int main()
{
    // sorting
    int arr[5] = {5, 3, 1, 2, 4};
    int temp;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    /*
        -Bubble Sort-

        First iteration:
        "5, 3, 1, 2, 4",
        "3, 5, 1, 2, 4",
        "3, 1, 5, 2, 4",
        "3, 1, 2, 5, 4",
        "3, 1, 2, 4, 5",

        Second iteration:
        "3, 1, 2, 4, 5",
        "1, 3, 2, 4, 5",
        "1, 2, 3, 4, 5",

        Sorted.
    */

    for (int i = 0; i < size; i++)
        printf("%d  ", arr[i]);

    return 0;
}