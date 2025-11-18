#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int len = strlen(s);
    if(s[len-1] == '\n') s[len-1] = '\0';

    int spaceCount = 0;
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ' ')
            spaceCount++;

    int i = 0;
    printf("%c", s[i]);
    while(s[i] != '\0') {
        if(s[i] == ' ' && spaceCount > 1) {
            printf(".%c", s[i+1]);
            spaceCount--;
        }
        i++;
    }

    for(i = strlen(s)-1; i >= 0; i--)
        if(s[i] == ' ') {
            printf(" %s", &s[i+1]);
            break;
        }

    return 0;
}
