#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

void printStudent(Student s) {
    printf("\nStudent Data:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    Student s1;

    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = 0;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printStudent(s1);

    return 0;
}
