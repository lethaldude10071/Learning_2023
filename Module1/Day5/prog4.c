#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} student;

int main() {
    int n, i;
    student *students;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (student *)malloc(n * sizeof(student));

    for (i = 0; i < n; i++) {
        printf("Enter the name, age, and GPA of student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    printf("\nStudent data:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }

    free(students);

    return 0;
}