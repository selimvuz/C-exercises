/*
Write a program in C to add two numbers using pointers.
Test Data:
Input the first number: 5
Input the second number: 6

Expected Output:
The sum of the entered numbers is: 11
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num1 = malloc(sizeof(int)), *num2 = malloc(sizeof(int));
    printf("Input the first number: ");
    scanf("%d", num1);

    printf("Input the second number: ");
    scanf("%d", num2);

    int result = *num1 + *num2;

    printf("The sum of the entered numbers is: %d", result);

    return 0;
}