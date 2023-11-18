#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open a file in write mode
    FILE *fp = fopen("test.txt", "w");

    // Write a string to the file
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);

    // Close the file
    fclose(fp);

    // Open the file in read mode
    FILE *rfp = fopen("test.txt", "r");

    // Read the file
    char buff[255];

    // Read all lines until EOF
    while (fgets(buff, 255, rfp) != NULL)
    {
        printf("%s", buff);
    }

    return 0;
}