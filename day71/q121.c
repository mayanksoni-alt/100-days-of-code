#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");

    char name[100];
    int age;

    scanf("%[^\n]", name);
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
