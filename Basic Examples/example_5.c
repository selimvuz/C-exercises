// Write a program in C to store n elements in an array and print the elements using a pointer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n = 5;

    // Dynamically allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = i + 2;
    }

    arr[n - 1] = 10; // Last element of the array

    // Use the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Accessing the array elements via pointer
    }

    // Free the allocated memory
    free(arr);

    return 0;
}