#include <stdio.h>

void birthday(char name[], int age)
{
    printf("Happy Birthday %s!\n", name);
    printf("You are %d years old.\n", age);
}

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int main()
{
    int age = 25;
    char name[] = "Yavuz";

    birthday(name, age);
    double result = cube(3.0);

    printf("The result is %d\n", (int)result);

    return 0;
}