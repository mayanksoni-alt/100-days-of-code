#include <stdio.h>

int main() {
    char s[1000], ch;
    scanf("%s", s);
    scanf(" %c", &ch);

    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
        if(s[i] == ch)
            count++;

    printf("%d", count);
    return 0;
}
