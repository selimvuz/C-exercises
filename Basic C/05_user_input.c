#include <stdio.h>
#include <string.h> // strlen

int main()
{
    char name[20];
    /*
        int age;

        printf("Enter your age: ");
        scanf("%d", &age); // &age is the address of the variable age

        printf("You are %d years old\n", age);
    */

    // Scanf will read up to the first space
    // We can use fgets to read the whole line

    printf("Enter your name: ");
    fgets(name, 25, stdin); // &name is the address of the variable name
    // 25 is the maximum number of characters to read
    // stdin is the standard input (keyboard)
    // We don't need to use &name because name is already an address
    name[strlen(name) - 1] = '\0';
    // Remove the last character (the newline character)

    printf("Your name is %s\n", name);

    return 0;
}