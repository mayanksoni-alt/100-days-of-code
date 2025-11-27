#include <stdio.h>

#define MAX_STUDENTS 5

typedef struct {
    char name;
    int roll_no;
    float marks;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int highestMarksIndex = 0;

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    for (int i = 1; i < MAX_STUDENTS; i++) {
        if (students[i].marks > students[highestMarksIndex].marks) {
            highestMarksIndex = i;
        }
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[highestMarksIndex].name);
    printf("Roll Number: %d\n", students[highestMarksIndex].roll_no);
    printf("Marks: %.2f\n", students[highestMarksIndex].marks);

    return 0;
}
