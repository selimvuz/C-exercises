#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nums[10];

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        nums[i] = rand() % 6 + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", nums[i]);
    }

    return 0;
}