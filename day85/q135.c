#include <stdio.h>

typedef enum {
    CODE_SUCCESS = 10,
    CODE_FAILURE,
    CODE_TIMEOUT
} StatusCode;

int main() {
    StatusCode success = CODE_SUCCESS;
    StatusCode failure = CODE_FAILURE;
    StatusCode timeout = CODE_TIMEOUT;

    printf("Success code: %d\n", success);
    printf("Failure code: %d\n", failure);
    printf("Timeout code: %d\n", timeout);

    return 0;
}
