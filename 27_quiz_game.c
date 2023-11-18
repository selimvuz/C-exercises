#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char question[100];
    char answer[20];
} Quiz;

int main()
{
    Quiz q1 = {"What is the capital of Malaysia?", "Kuala"};
    Quiz q2 = {"What is the capital of Indonesia?", "Jakarta"};
    Quiz q3 = {"What is the capital of Thailand?", "Bangkok"};

    Quiz quizzes[3] = {q1, q2, q3};

    int size = sizeof(quizzes) / sizeof(quizzes[0]);

    int score = 0;

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", quizzes[i].question);

        char answer[20];

        printf("Enter your answer: ");
        scanf("%s", answer);
        scanf("%c"); // to consume the newline character

        if (strcmp(strlwr(answer), strlwr(quizzes[i].answer)) == 0)
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }

    printf("Your score is %d/%d\n", score, size);

    return 0;
}