#include <stdio.h>

#define MAX_STUDENTS 5

typedef struct {
    char name;
    int roll_no;
    float marks;
} Student;

int main() {
    Student students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Data:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
