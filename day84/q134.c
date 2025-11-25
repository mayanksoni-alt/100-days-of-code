#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void printStatusMessage(Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation successful.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }
}

int main() {
    Status operation1 = SUCCESS;
    Status operation2 = FAILURE;
    Status operation3 = TIMEOUT;

    printStatusMessage(operation1);
    printStatusMessage(operation2);
    printStatusMessage(operation3);

    return 0;
}
