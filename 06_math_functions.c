#include <stdio.h>
#include <math.h> // sqrt, pow, ceil, floor, round, abs

#define M_PI 3.14159265358979323846 // Pi

int main()
{
    int A = sqrt(16); // Square root
    printf("A = %d\n", A);

    int B = pow(2, 3); // Power (2^3)
    printf("B = %d\n", B);

    float C = ceil(36.356); // Round up
    printf("C = %.2f\n", C);

    float D = floor(36.356); // Round down
    printf("D = %.2f\n", D);

    float E = round(36.356); // Round to the nearest integer
    printf("E = %.2f\n", E);

    float F = fabs(-36.356); // Absolute value
    printf("F = %.2f\n", F);
    // fabs is for float, abs is for int

    float G = tan(45); // Tan
    printf("G = %.2f\n", G);

    // Calculate the circumference and area of a circle
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    double circumference = 2 * M_PI * radius; // Pi * diameter
    double area = M_PI * pow(radius, 2);      // Pi * radius^2

    printf("Circumference = %.10lf\n", circumference);
    printf("Area = %.10lf\n", area);

    return 0;
}