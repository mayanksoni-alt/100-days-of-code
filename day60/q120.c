#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    
    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Capitalize first character if it's alphabet
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;

    // Capitalize first letter after every space
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }

    printf("%s", str);

    return 0;
}
