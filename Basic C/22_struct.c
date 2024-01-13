#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student student1;
    struct Student student2;

    strcpy(student1.name, "Yavuz");
    student1.age = 25;
    student1.marks = 100.0;

    strcpy(student2.name, "Ahmet");
    student2.age = 30;
    student2.marks = 90.0;

    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}