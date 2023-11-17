#include <stdio.h>

int main()
{
    // continue
    for (int i = 1; i <= 15; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }

        printf("%d  ", i);
    }

    return 0;
}