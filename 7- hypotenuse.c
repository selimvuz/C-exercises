#include <stdio.h>
#include <math.h> // sqrt, pow

int main()
{
    float a, b, c;

    printf("Enter the length of the first side: ");
    scanf("%f", &a);

    printf("Enter the length of the second side: ");
    scanf("%f", &b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("The length of the hypotenuse is %.2f\n", c);

    return 0;
}