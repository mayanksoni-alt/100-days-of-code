#include <stdio.h>

typedef enum {
    APPLE,
    BANANA,
    CHERRY,
    DATE
} Fruit;

int main() {
    const char* fruitNames[] = {"APPLE", "BANANA", "CHERRY", "DATE"};

    for (Fruit f = APPLE; f <= DATE; f++) {
        printf("Enum name: %s, Integer value: %d\n", fruitNames[f], f);
    }

    return 0;
}
