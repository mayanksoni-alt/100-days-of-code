#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int id;
    int marks;
};

int main() {
    struct Student s1, s2;

    scanf("%s %d %d", s1.name, &s1.id, &s1.marks);
    scanf("%s %d %d", s2.name, &s2.id, &s2.marks);

    if(strcmp(s1.name, s2.name) == 0 && s1.id == s2.id && s1.marks == s2.marks)
        printf("Same");
    else
        printf("Not Same");

    return 0;
}
