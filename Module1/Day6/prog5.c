#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

void init_students(struct Student *students, int n) {
    char input[100];
    for (int i = 0; i < n; i++) {
        printf("Enter student %d details: ", i+1);
        scanf(" %[^\n]s", input);
        sscanf(input, "%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }
}

void display_students(struct Student *students, int n) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

struct Student *search_student(struct Student *students, int n, char *name) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return &students[i];
        }
    }
    return NULL;
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    init_students(students, n);
    char name[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", name);
    struct Student *student = search_student(students, n, name);
    if (student != NULL) {
        printf("\nStudent Found:\n");
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", student->rollno, student->name, student->marks);
    } else {
        printf("\nStudent not found.\n");
    }
    return 0;
}