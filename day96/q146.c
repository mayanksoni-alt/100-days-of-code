#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[NAME_LENGTH];
    int id;
    float salary;
    Date joiningDate;
} Employee;

int main() {
    Employee emp1;

    strcpy(emp1.name, "John Doe");
    emp1.id = 1001;
    emp1.salary = 65000.00;
    emp1.joiningDate.day = 15;
    emp1.joiningDate.month = 7;
    emp1.joiningDate.year = 2023;

    printf("Employee Details:\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %d/%d/%d\n", emp1.joiningDate.day, emp1.joiningDate.month, emp1.joiningDate.year);

    return 0;
}
