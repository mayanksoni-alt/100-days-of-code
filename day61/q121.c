#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50];
    int age;

    fptr = fopen("info.txt", "w");

    if (fptr == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    scanf("%s", name);
    scanf("%d", &age);

    fprintf(fptr, "Name: %s\nAge: %d", name, age);

    fclose(fptr);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
