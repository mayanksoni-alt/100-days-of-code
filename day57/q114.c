#include <stdio.h>

int main() {
    char s[200];
    scanf("%s", s);

    int maxLen = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int freq[256] = {0};
        int len = 0;

        for (int j = i; s[j] != '\0'; j++) {
            if (freq[(unsigned char)s[j]] == 1)
                break;

            freq[(unsigned char)s[j]] = 1;
            len++;

            if (len > maxLen)
                maxLen = len;
        }
    }

    printf("%d", maxLen);

    return 0;
}
