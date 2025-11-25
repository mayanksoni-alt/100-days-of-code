#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    char ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("File converted to uppercase successfully.");
    return 0;
}
