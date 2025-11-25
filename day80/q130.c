#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    FILE *file_ptr;
    struct Student s1 = {"Alice", 1, 95.5};
    struct Student s2 = {"Bob", 2, 88.0};
    struct Student temp_student;

    file_ptr = fopen("student_records.txt", "w");
    fprintf(file_ptr, "%s %d %.2f\n", s1.name, s1.roll_number, s1.marks);
    fprintf(file_ptr, "%s %d %.2f\n", s2.name, s2.roll_number, s2.marks);
    fclose(file_ptr);

    file_ptr = fopen("student_records.txt", "r");
    while (fscanf(file_ptr, "%s %d %f", temp_student.name, &temp_student.roll_number, &temp_student.marks) != EOF) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", temp_student.name, temp_student.roll_number, temp_student.marks);
    }
    fclose(file_ptr);

    return 0;
}
