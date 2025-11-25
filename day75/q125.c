#include <stdio.h>

int main() {
    char filename[100];
    char text[500];

    scanf("%s", filename);
    getchar();
    fgets(text, sizeof(text), stdin);

    FILE *fp = fopen(filename, "a");
    fputs(text, fp);
    fclose(fp);

    printf("Text appended successfully.");

    return 0;
}
