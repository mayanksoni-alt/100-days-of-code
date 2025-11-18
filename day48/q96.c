#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int start = 0, i = 0;
    while(1) {
        if(s[i] == ' ' || s[i] == '\0' || s[i] == '\n') {
            for(int j = i - 1; j >= start; j--)
                printf("%c", s[j]);
            if(s[i] == ' ') printf(" ");
            if(s[i] == '\0' || s[i] == '\n') break;
            start = i + 1;
        }
        i++;
    }

    return 0;
}
