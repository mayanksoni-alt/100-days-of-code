#include <stdio.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int v = 0, c = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else
            c++;
    }
    printf("Vowels=%d, Consonants=%d", v, c);
    return 0;
}
