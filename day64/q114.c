#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%[^\n]", s);

    int maxLen = 0, start = 0;
    int index[256];
    for(int i=0;i<256;i++) index[i] = -1;

    for(int i=0;s[i];i++){
        if(index[(int)s[i]] >= start) start = index[(int)s[i]] + 1;
        index[(int)s[i]] = i;
        if(i - start + 1 > maxLen) maxLen = i - start + 1;
    }

    printf("%d", maxLen);
    return 0;
}
