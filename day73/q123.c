
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    char ch;
    int characters = 0, words = 0, lines = 0, inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch)) {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d", lines + 1);

    fclose(fp);
    return 0;
}

