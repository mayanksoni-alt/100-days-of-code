#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    printf("%c", s[0]);
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ' ' && s[i+1] != '\0' && s[i+1] != '\n')
            printf(".%c", s[i+1]);
    }
    printf(".");
    return 0;
}
