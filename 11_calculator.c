#include <stdio.h>

int main()
{
    float num1, num2;
    char operator;
    double result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }

    return 0;
}