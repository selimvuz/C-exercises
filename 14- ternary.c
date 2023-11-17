#include <stdio.h>
#include <stdbool.h>

int findMax(int x, int y); // function prototype

int main()
{
    int num1, num2;
    num1 = 3;
    num2 = 5;

    printf("The result is %d\n", findMax(num1, num2));

    return 0;
}

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}
