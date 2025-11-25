#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int cap = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (cap && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            cap = 0;
        } else if (str[i] == ' ') {
            cap = 1;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s", str);
    return 0;
}
