#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
    float marks;
} Student;

int main()
{
    Student s1 = {"Lane", 20, 90.5};
    Student s2 = {"John", 21, 88.5};
    Student s3 = {"Mary", 22, 85.5};

    Student students[3] = {s1, s2, s3};

    int size = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < size; i++)
    {
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}