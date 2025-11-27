#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int roll_no;
    float marks;
} Student;

Student findTopStudent(Student students[], int size) {
    int highestMarksIndex = 0;
    for (int i = 1; i < size; i++) {
        if (students[i].marks > students[highestMarksIndex].marks) {
            highestMarksIndex = i;
        }
    }
    return students[highestMarksIndex];
}

int main() {
    Student students[MAX_STUDENTS];

    strcpy(students[0].name, "Alice");
    students[0].roll_no = 101;
    students[0].marks = 85.5;

    strcpy(students[1].name, "Bob");
    students[1].roll_no = 102;
    students[1].marks = 92.0;

    strcpy(students[2].name, "Charlie");
    students[2].roll_no = 103;
    students[2].marks = 78.3;

    strcpy(students[3].name, "David");
    students[3].roll_no = 104;
    students[3].marks = 95.7;

    strcpy(students[4].name, "Jane");
    students[4].roll_no = 105;
    students[4].marks = 88.9;

    Student topStudent = findTopStudent(students, MAX_STUDENTS);

    printf("\nTop student details:\n");
    printf("Name: %s\n", topStudent.name);
    printf("Roll Number: %d\n", topStudent.roll_no);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}

