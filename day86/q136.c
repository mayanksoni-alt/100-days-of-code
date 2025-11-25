#include <stdio.h>

typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY
} MenuChoice;

int main() {
    MenuChoice choice = ADD;
    int num1 = 10;
    int num2 = 5;
    int result;

    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("Result of addition: %d\n", result);
            break;
        case SUBTRACT:
            result = num1 - num2;
            printf("Result of subtraction: %d\n", result);
            break;
        case MULTIPLY:
            result = num1 * num2;
            printf("Result of multiplication: %d\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
