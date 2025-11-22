#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char line[200];

    fptr = fopen("info.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    while (fgets(line, sizeof(line), fptr)) {
        printf("%s", line);
    }

    fclose(fptr);
    return 0;
}
