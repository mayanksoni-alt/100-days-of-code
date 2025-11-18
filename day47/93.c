#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    scanf("%s", s1);
    scanf("%s", s2);

    int freq[26] = {0};

    for (int i = 0; s1[i] != '\0'; i++)
        freq[s1[i] - 'a']++;

    for (int i = 0; s2[i] != '\0'; i++)
        freq[s2[i] - 'a']--;

    for (int i = 0; i < 26; i++)
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }

    printf("Anagrams");
    return 0;
}
