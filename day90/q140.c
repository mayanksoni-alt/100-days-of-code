#include <stdio.h>

typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    char name;
    int age;
    Gender gender;
} Person;

int main() {
    Person person1;
    
    person1.gender = MALE;

    printf("Person's gender value is: %d\n", person1.gender);

    if (person1.gender == MALE) {
        printf("Person's gender is: Male\n");
    } else if (person1.gender == FEMALE) {
        printf("Person's gender is: Female\n");
    } else {
        printf("Person's gender is: Other\n");
    }

    return 0;
}

