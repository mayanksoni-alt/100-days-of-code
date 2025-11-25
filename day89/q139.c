#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE
} Color;

int main() {
    Color c1 = RED;
    Color c2 = GREEN;
    Color c3 = BLUE;

    printf("The integer value of RED is: %d\n", c1);
    printf("The integer value of GREEN is: %d\n", c2);
    printf("The integer value of BLUE is: %d\n", c3);

    return 0;
}

