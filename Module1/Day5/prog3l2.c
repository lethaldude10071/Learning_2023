#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n];
    float total_marks = 0;

    // Read the student details
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter the roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%f", &s[i].marks);
        total_marks += s[i].marks;
    }

    // Compute the average marks
    float avg_marks = total_marks / n;

    // Print the student details and compute above/below average marks
    printf("\nStudent details:\n");
    printf("Name\tRoll\tMarks\tAbove/Below Average\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.2f\t", s[i].name, s[i].roll, s[i].marks);
        if (s[i].marks > avg_marks) {
            printf("Above\n");
        } else if (s[i].marks < avg_marks) {
            printf("Below\n");
        } else {
            printf("Equal\n");
        }
    }

    return 0;
}