#include <stdio.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int l = 0;
    while(s[l] != '\0') l++;
    int i = 0, j = l - 1;
    int ok = 1;
    while(i < j) {
        if(s[i] != s[j]) {
            ok = 0;
            break;
        }
        i++;
        j--;
    }
    if(ok) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}
