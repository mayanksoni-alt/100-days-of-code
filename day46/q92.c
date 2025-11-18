#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int freq[26] = {0};

    for(int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if(c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
            if(freq[c - 'a'] == 2) {
                printf("%c", c);
                return 0;
            }
        }
    }

    return 0;
}

