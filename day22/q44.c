#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, num = 1.0, den = 1.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += num / den;
        num += 2;
        den += 2;
    }
    printf("Approximate sum: %.2f", sum);
    return 0;
}
