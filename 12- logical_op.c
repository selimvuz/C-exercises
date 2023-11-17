#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter two boolean (0 or 1): ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (&&, ||, !): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '&':
        printf("%d && %d = %d\n", num1, num2, num1 && num2);
        break;
    case '|':
        printf("%d || %d = %d\n", num1, num2, num1 || num2);
        break;
    case '!':
        printf("!%d = %d\n", num1, !num1);
        printf("!%d = %d\n", num2, !num2);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }
    return 0;
}