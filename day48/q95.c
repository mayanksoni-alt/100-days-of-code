#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    scanf("%s", s1);
    scanf("%s", s2);

    int l1 = strlen(s1), l2 = strlen(s2);

    if(l1 != l2) {
        printf("Not rotation");
        return 0;
    }

    char temp[2000];
    strcpy(temp, s1);
    strcat(temp, s1);

    if(strstr(temp, s2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
