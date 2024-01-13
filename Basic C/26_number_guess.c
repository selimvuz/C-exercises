#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, num, tries = 0;

    srand(time(NULL));

    num = rand() % 5 + 1;

    printf("Guess My Number Game\n\n");

    do
    {
        printf("Enter a guess between 1 and 5 : ");
        scanf("%d", &guess);
        tries++;

        if (guess > num)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num)
        {
            printf("Too low!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n", tries);
        }
    } while (guess != num);

    return 0;
}