/*
Write a program in C to find the maximum number between two numbers using a pointer.

Test Data :
Input the first number: 5
Input the second number: 6

Expected Output:
6 is the maximum number. 
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

    int result = (*num1 > *num2) ? *num1 : *num2;

    printf("%d is the maximum number", result);

    return 0;
}